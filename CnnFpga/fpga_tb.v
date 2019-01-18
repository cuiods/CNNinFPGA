`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:07:07 01/17/2019
// Design Name:   fpga
// Module Name:   D:/Project/CNNinFPGA/CnnFpga/fpga_tb.v
// Project Name:  CnnFpga
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fpga
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fpga_tb;

	// Inputs
	reg USB_FLAGA;
	reg USB_FLAGB;
	reg USB_FLAGC;
	reg USB_FLAGD;
	reg USB_IFCLK;

	// Outputs
	wire [3:0] LED;
	wire [1:0] USB_ADDR;
	wire USB_SLRD;
	wire USB_SLWR;
	wire USB_SLOE;
	wire USB_PKEND;

	// Bidirs
	wire [15:0] USB_DATA;
	reg [15:0] data;
	assign USB_DATA = data;
	
	localparam PERIOD = 4;

	// Instantiate the Unit Under Test (UUT)
	fpga uut (
		.LED(LED), 
		.USB_DATA(USB_DATA), 
		.USB_ADDR(USB_ADDR), 
		.USB_SLRD(USB_SLRD), 
		.USB_SLWR(USB_SLWR), 
		.USB_SLOE(USB_SLOE), 
		.USB_FLAGA(USB_FLAGA), 
		.USB_FLAGB(USB_FLAGB), 
		.USB_FLAGC(USB_FLAGC), 
		.USB_FLAGD(USB_FLAGD), 
		.USB_PKEND(USB_PKEND), 
		.USB_IFCLK(USB_IFCLK)
	);

	initial begin
		// Initialize Inputs
		USB_FLAGA = 1;
		USB_FLAGB = 0;
		USB_FLAGC = 0;
		USB_FLAGD = 1;
		USB_IFCLK = 0;
		// Wait 100 ns for global reset to finish
		data = 16'b0000000000000001;
		#6000;
      USB_FLAGA = 0;
		// Add stimulus here

	end
	always begin
	   data = data + 1'b1;
      USB_IFCLK = 1'b0;
      #(PERIOD / 2);
      USB_IFCLK = 1'b1;
      #(PERIOD / 2);
   end
      
endmodule

