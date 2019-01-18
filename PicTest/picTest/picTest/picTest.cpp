#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <synchapi.h>
#include <handleapi.h>
#include "CyAPI.h"
#include <vector>
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#define TIMEOUT 10

using namespace std;

int main() {

	cv::Mat src, srcOfMerge;
	std::vector<cv::Mat> mv;
	/// Read image ( same size, same type )
	src = cv::imread("../picture/test.jpg");
	if(!src.data) {
		std::cout << "Error loading src" << std::endl; 
		return -1; 
	}
	cv::split(src, mv);
	//Create Windows
	//cv::namedWindow("RGB", 1);
	//cv::namedWindow("R", 1);
	//cv::namedWindow("G", 1);
	//cv::namedWindow("B", 1);
	//cv::namedWindow("srcOfMerge", 1);
	//cv::imshow( "RGB", src);
	//cv::imshow("R",mv[0]);
	//cv::imshow("G",mv[1]);
	//cv::imshow("B",mv[2]);
	//cv::merge(mv,srcOfMerge);
	//cv::imshow("srcOfMerge",srcOfMerge);
	//cv::waitKey(100000);
	
	//cout<<mv[0].rows<<" "<<mv[0].cols<<endl;
	//cout<<mv[1].rows<<" "<<mv[1].cols<<endl;
	//cout<<mv[2].rows<<" "<<mv[2].cols<<endl;
	//cout<<src.at<cv::Vec3b>(0,0)<<" "<<src.at<cv::Vec3b>(0,1)<<" "<<src.at<cv::Vec3b>(0,2)<<" "<<src.at<cv::Vec3b>(0,3)<<endl;
	//cout<<(int)mv[0].at<uchar>(0,0)<<endl;
	//printf("%02x\n", mv[0].at<uchar>(0,0));


	//Initialize one new USB device
	CCyUSBDevice  *USBDevice = new  CCyUSBDevice(NULL);
	//Get the number of valid devices
	int dev_num = USBDevice->DeviceCount();
	if (dev_num == 0) {
		std::cout << "There are no valide devices." << std::endl;
		return 0;
	}
	//Open the first device
	USBDevice->Reset();
	if (!USBDevice->Open(0)) {
		std::cout << "Open device failed!" << std::endl;
		return 0;
	};
	//Define out and in events
	OVERLAPPED outOvLap, inOvLap;
	//write from pc to usb 
	outOvLap.hEvent = CreateEvent(NULL, false, false, "CYUSB_OUT");
	//read from usb to pc
	inOvLap.hEvent = CreateEvent(NULL, false, false, "CYUSB_IN");

	LONG  length = 512;
	//define read buffer 
	PUCHAR inBuf = new UCHAR[length];
	//define write buffer 
	PUCHAR outBuf = new UCHAR[length];
	//clear all buffer
	ZeroMemory(inBuf, length);
	ZeroMemory(outBuf, length);

	//Set timeout time for write and read
	USBDevice->BulkOutEndPt->TimeOut = 1000;
	USBDevice->BulkInEndPt->TimeOut = 1000;
	
	//Êý¾Ý²âÊÔ
	//put the data into outBuf
	uchar uc = 0x00;
	for (int i = 0; i < length; i++) {
		outBuf[i] = uc++;
	}
	int k=5;
	while(k--){
		// Write data to usb
		if (!USBDevice->BulkOutEndPt->XferData(outBuf, length)) {
			std::cout << "To write data to usb failed!" << std::endl;
			return 0;
		}
		cout<<"write:"<<(5-k)<<endl;
		//for (int i = 0; i < length; i++)
			//printf("%02x ",outBuf[i]);
		//cout<<endl;
		//Sleep(10);
	}
	k=5;
	while(k--)
	{
		// Read data from usb
		if (!USBDevice->BulkInEndPt->XferData(inBuf, length)) {
			std::cout << "To read data from usb failed!" << std::endl;
			return 0;
		}

		cout<<"read:"<<(5-k)<<endl;
		//show the data from usb
		for (int i = 0; i < length; i++) {
			printf("%02x ",inBuf[i]);
		}
		std::cout << std::endl;
	}


	//Í¼Æ¬Êý¾Ý²âÊÔ
	//std::vector<cv::Mat> mv_res;

	//for(int k=0; k<mv.size(); k++)
	//{
	//	cv::Mat rgb(src.rows, src.cols, CV_8UC1);
	//	int trans_id = 0;
	//	int x=0, y=0, xx=0, yy=0;
	//	double sum = src.rows * src.cols;

	//	while(trans_id*length < sum)
	//	{
	//		trans_id++;
	//	
	//		for(int i = 0; i < length; i++)
	//		{
	//			if(x >= src.rows)
	//				outBuf[i] = 0x00;
	//			else
	//				outBuf[i] = mv[k].at<uchar>(x,y);
	//			y++;
	//			if(y==src.cols)
	//			{
	//				x++;
	//				y=0;
	//			}
	//		}

	//		//cout<<"write"<<trans_id<<":"<<endl;
	//		//for (int i = 0; i < length; i++)
	//		//	printf("%02x ",outBuf[i]);
	//		//cout<<endl;

	//		// Write data to usb
	//		if (!USBDevice->BulkOutEndPt->XferData(outBuf, length)) {
	//			std::cout << "To write data to usb failed!" << std::endl;
	//			return 0;
	//		}

	//		// Read data from usb
	//		if (!USBDevice->BulkInEndPt->XferData(inBuf, length)) {
	//			std::cout << "To read data from usb failed!" << std::endl;
	//			return 0;
	//		}

	//		//cout<<"read"<<trans_id<<":"<<endl;
	//		////show the data from usb
	//		//for (int i = 0; i < length; i++) {
	//		//	printf("%02x ",inBuf[i]);
	//		//}
	//		//cout<<endl;

	//		for(int j = 0; j < length; j++)
	//		{
	//			if(xx >= src.rows)
	//				break;
	//			else
	//				rgb.at<uchar>(xx,yy) = inBuf[j];
	//			yy++;
	//			if(yy==src.cols)
	//			{
	//				xx++;
	//				yy=0;
	//			}
	//		}

	//	}
	//	mv_res.push_back(rgb);
	//}
	//cv::imshow("R", mv_res[0]);
	//cv::imshow("G", mv_res[1]);
	//cv::imshow("B", mv_res[2]);
	//
	//cv::merge(mv_res, srcOfMerge);
	//cv::imshow("srcOfMerge", srcOfMerge);
	//cv::waitKey(100000);


	CloseHandle(outOvLap.hEvent);
	CloseHandle(inOvLap.hEvent);
	free(inBuf);
	free(outBuf);

	return 0;
}