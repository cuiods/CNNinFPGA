 #include <iostream>
#include <Windows.h>
#include <synchapi.h>
#include <handleapi.h>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "CyAPI.h"
#include "stdafx.h"
#define TIMEOUT 10
using namespace std;
using namespace cv;

void UsbTransform(CCyUSBDevice  *USBDevice, int* data, int* outdata, int offset)
{
	//Define out and in events
	OVERLAPPED outOvLap, inOvLap;
	//write from pc to usb 
	outOvLap.hEvent = CreateEvent(NULL, false, false, "CYUSB_OUT");
	//read from usb to pc
	inOvLap.hEvent = CreateEvent(NULL, false, false, "CYUSB_IN");

	LONG  length = 512;
	//define read buffer 

	//define write buffer 
	PUCHAR outBuf = new UCHAR[length];
	PUCHAR inBuf = new UCHAR[length];

	//clear all buffer
	ZeroMemory(inBuf, length);
	ZeroMemory(outBuf, length);

	for (int i = 0; i < length; i++)
		outBuf[i] = data[i + offset];

	//Set timeout time for write and read
	USBDevice->BulkOutEndPt->TimeOut = 1000;
	USBDevice->BulkInEndPt->TimeOut = 1000;

	if (!USBDevice->BulkOutEndPt->XferData(outBuf, length))
	{
		std::cout << "To write data to usb failed!" << std::endl;
		system("pause");
	}
	// Read data from usb
	if (!USBDevice->BulkInEndPt->XferData(inBuf, length))
	{
		std::cout << "To read data from usb failed!" << std::endl;
		system("pause");
	}
	for (int i = 0; i < length; i++)
	{
		outdata[i + offset] = inBuf[i];
	}

	CloseHandle(outOvLap.hEvent);
	CloseHandle(inOvLap.hEvent);
	free(inBuf);
	free(outBuf);

}

int main(int argc, char** argv) {
	cv::Mat src, srcOfMerge;
	std::vector<cv::Mat> mv;
	//	std::vector<cv::Mat> mv1;
	//cv::namedWindow("R", 1);

	/// Read image ( same size, same type )
	src = cv::imread("../picture/test.jpg");
	cv::Mat imageout = cv::Mat::zeros(src.size(), src.type());
	if (!src.data) {
		std::cout << "Error loading src" << std::endl;
		return -1;
	}
	cv::split(src, mv);

	//Initialize one new USB device
	CCyUSBDevice  *USBDevice = new  CCyUSBDevice(NULL);
	//Get the number of valid devices
	int dev_num = USBDevice->DeviceCount();
	if (dev_num == 0){
		std::cout << "There are no valide devices." << std::endl;
		return 0;
	}
	//Open the first device
	USBDevice->Reset();
	if (!USBDevice->Open(0)){
		std::cout << "Open device failed!" << std::endl;
		return 0;
	};
	for (int maptype = 0; maptype < 3; maptype++)
	{
		LONG  row0 = mv[maptype].rows;
		LONG  col0 = mv[maptype].cols;
		int LengthOfData = row0 *col0;

		int *Buf = new int[LengthOfData*sizeof(int)];
		int *Outdata = new int[LengthOfData*sizeof(int)];

		int point = 0;
		for (int i = 0; i < row0; i++)
		{
			for (int j = 0; j < col0; j++)
			{
				Buf[point] = mv[maptype].at<uchar>(i, j);
				point++;
			}
		}
		for (int size = 0; size < LengthOfData; size = size + 512)
		{
			UsbTransform(USBDevice, Buf, Outdata, size);
		}
		for (int i = 0; i < LengthOfData; i++)
		{
			int ncol = i % col0;
			int nrow = i / col0;
			imageout.at<Vec3b>(nrow, ncol)[maptype] = Outdata[i];
			//	printf("%d ",data[i]);
		}
	}
	namedWindow("show", WINDOW_AUTOSIZE);
	//	imshow( "show", imageout); 
	imshow("show", imageout);
	waitKey();
	return 0;
}
