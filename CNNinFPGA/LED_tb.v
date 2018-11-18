`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:44:01 11/02/2016
// Design Name:   fpga
// Module Name:   F:/fpga_sample/fpga_tb.v
// Project Name:  fpga_sample
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
localparam PERIOD = 8;


// Inputs
reg CLOCK_48;
// Outputs
wire [3:0] LED;


// Instantiate the Unit Under Test (UUT)
led uut (
	.CLOCK_48(CLOCK_48), 
	.LED(LED)
);

initial begin
	// Initialize Inputs
	CLOCK_48 = 0;

	// Wait 100 ns for global reset to finish
	#100;
        
	// Add stimulus here
end

always begin
   CLOCK_48 = 1'b0;
   #(PERIOD / 2);
   CLOCK_48 = 1'b1;
   #(PERIOD / 2);
end
      
endmodule

