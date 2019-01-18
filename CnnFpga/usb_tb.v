`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:10:24 01/17/2019
// Design Name:   usb
// Module Name:   D:/Project/CNNinFPGA/CnnFpga/usb_tb.v
// Project Name:  CnnFpga
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: usb
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module usb_tb;

	// Inputs
	reg i_usb_ifclk;
	reg i_usb_flaga;
	reg i_usb_flagd;

	// Outputs
	wire [1:0] o_usb_addr;
	wire o_usb_slrd;
	wire o_usb_slwr;
	wire o_usb_sloe;
	wire o_usb_pkend;

	// Bidirs
	wire [15:0] io_usb_data;
	
	reg [15 :  0]usb_data = 0;

	// Instantiate the Unit Under Test (UUT)
	usb uut (
		.i_usb_ifclk(i_usb_ifclk), 
		.i_usb_flaga(i_usb_flaga), 
		.i_usb_flagd(i_usb_flagd), 
		.io_usb_data(io_usb_data), 
		.o_usb_addr(o_usb_addr), 
		.o_usb_slrd(o_usb_slrd), 
		.o_usb_slwr(o_usb_slwr), 
		.o_usb_sloe(o_usb_sloe), 
		.o_usb_pkend(o_usb_pkend)
	);

	initial begin
		// Initialize Inputs
		i_usb_ifclk = 0;
		i_usb_flaga = 0;
		i_usb_flagd = 0;
		
		usb_data = 16'b1111111111111111;
		// Wait 100 ns for global reset to finish
		#6000;
      i_usb_flaga = 0;
		// Add stimulus here

	end
      
endmodule

