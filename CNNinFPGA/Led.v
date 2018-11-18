`timescale 1ns / 1ps

`define  DELAY            25'd24000000
module led(
	input			      CLOCK_48,				 //	24 MHz
	output	[3:0]	   LED					    //	LED [3:0]
	);

reg [24 :0] counter = 0;
reg [3:0] state = 4'b0001;

always @(posedge CLOCK_48) begin
   if (counter == `DELAY) begin
	    counter <= 0;
		state[3] <= state[2];
		state[2] <= state[1];
		state[1] <= state[0];
		state[0] <= state[3];
	end
	else begin
	   counter <= counter + 1'b1;
	end
end
assign LED[0] = state[0];
assign LED[1] = state[1];
assign LED[2] = state[2];
assign LED[3] = state[3];
endmodule
