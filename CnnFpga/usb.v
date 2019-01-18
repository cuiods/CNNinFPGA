`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:17:44 11/01/2016 
// Design Name: 
// Module Name:    usb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`include "register.v"
module usb #(
  parameter DATA_WIDTH = 16
)(
	input								i_usb_ifclk,			 //   USB Clock inout
	input								i_usb_flaga,			 //	USB Flag  //CY68013 EP2 FIFO empty indication; 1:not empty; 0: empty
	input								i_usb_flagd,			 //	USB Flag  //CY68013 EP6 FIFO full indication; 1:not full; 0: full
	inout	[DATA_WIDTH - 1 : 0]		io_usb_data,			 //   USB Data bus 16 Bits
	output	[1:0]						o_usb_addr,				 //   USB Address bus 2 Bits
	output								o_usb_slrd,				 //   USB Read Enable
	output								o_usb_slwr,				 //	USB Write Enable
	output								o_usb_sloe,				 //	USB Output Enable
	output								o_usb_pkend 			 //	USB Packet end
);


localparam IDLE = 3'b000;
localparam SELECT_READ_FIFO = 3'b001;
localparam READ_FROM_USB = 3'b010;
localparam SELECT_WRITE_FIFO = 3'b011;
localparam WRITE_TO_USB = 3'b100;
localparam CALCULATE_CNN = 3'b101;

// CNN kernel
// localparam A1 = 1'b1;
// localparam A2 = 1'b0;
// localparam A3 = 1'b1;
// localparam A4 = 1'b0;
// localparam A5 = 1'b1;
// localparam A6 = 1'b0;
// localparam A7 = 1'b1;
// localparam A8 = 1'b0;
// localparam A9 = 1'b1;

reg [2 : 0]              state = 0;
reg [2 : 0]              state_nxt = 0;
reg [DATA_WIDTH - 1 : 0] buff [`MAXPKG : 0];
reg [DATA_WIDTH - 1 : 0] out_buff [`MAXPKG : 0];
reg [`LOGMAXPKG : 0]     counter = 0;
reg [`LOGMAXPKG : 0]     number = 0;
reg [`LOGMAXPKG : 0]     out_number = 0;
reg [`LOGMAXPKG : 0]     cal_count = 0;
reg                      calcute_tag = 1'b0; 
reg                      to_cal_tag = 1'b0; 
reg                      usb_slrd = 1'b0;
reg                      usb_slwr = 1'b0;
reg                      usb_sloe = 1'b0;
reg                      usb_pkend = 1'b0;
reg [1 : 0]              usb_addr = 2'b00;
reg [DATA_WIDTH - 1 :  0]usb_data = 0;
// reg [DATA_WIDTH - 1 :  0]temp_data = 0;
reg [4 : 0]              itr = 0;

assign o_usb_addr = usb_addr;
assign o_usb_slrd = usb_slrd;
assign o_usb_slwr = usb_slwr;
assign o_usb_sloe = usb_sloe;
assign o_usb_pkend = usb_pkend;
assign io_usb_data = (usb_sloe == 1'b1)? usb_data : 16'bz;
always @(*) begin
   case (state)
	    IDLE: begin
			if (i_usb_flaga == 1'b1) begin
				// Transform to SELECT_READ_FIFO
				state_nxt = SELECT_READ_FIFO;
			end
			else begin
				state_nxt = IDLE;
			end
		end
		SELECT_READ_FIFO: begin
			state_nxt = READ_FROM_USB;
		end
		READ_FROM_USB: begin
			if ((counter == `MAXPKG) || (i_usb_flaga == 1'b0)) begin
				state_nxt = CALCULATE_CNN;
				//state_nxt = SELECT_WRITE_FIFO;
			end
			else begin
				state_nxt = READ_FROM_USB;
			end
		end
		SELECT_WRITE_FIFO: begin
			if(i_usb_flagd == 1'b1) begin
				state_nxt = WRITE_TO_USB;
			end
			else begin
				state_nxt = IDLE;
			end
		end
		WRITE_TO_USB: begin
		    if(counter == number) begin
				state_nxt = IDLE;
			end
			else begin
				state_nxt = WRITE_TO_USB;
			end
		end
		CALCULATE_CNN: begin
		    if(to_cal_tag == 1'b1) begin
			     state_nxt = CALCULATE_CNN;
			 end
			 else if(calcute_tag == 1'b1) begin
			     state_nxt = SELECT_WRITE_FIFO;
			 end
			 else begin
			     state_nxt = IDLE;
			 end
		end
		default: begin
			state_nxt = IDLE;
		end
	endcase
end

always @(posedge i_usb_ifclk) begin
    case (state)
	    IDLE: begin
		   usb_slrd <= 1'b1;
			usb_slwr <= 1'b1;
			usb_sloe <= 1'b1;
			usb_pkend <= 1'b1;
			usb_addr <= 2'b00;
			counter <= 0;
			number <= 0;
			out_number <= 0;
			cal_count <= 0;
			to_cal_tag <=0;
			usb_data <= 0;
			calcute_tag <= 0;
		end
		SELECT_READ_FIFO: begin
			usb_slrd <= 1'b1;
			usb_slwr <= 1'b1;
			// sloe low
			usb_sloe <= 1'b0;
			usb_pkend <= 1'b1;
			// select EP2
			usb_addr <= 2'b00;
			counter <= 0;
			number <= 0;
			out_number <= 0;
			cal_count <= 0;
			usb_data <= 0;
			calcute_tag <= 0;
			to_cal_tag <= 0;
		end
		READ_FROM_USB: begin
			usb_slrd <= ~usb_slrd;
			usb_slwr <= 1'b1;
			// sloe low
			usb_sloe <= 1'b0;
			usb_pkend <= 1'b1;
			// select EP2
			usb_addr <= 2'b00;
			// If EP2 is not empty
			// To store into buffer
			if((usb_slrd == 1'b0) && (i_usb_flaga == 1'b1)) begin
				 buff[counter] <= io_usb_data;
				 counter <= counter + 1'b1;
				 to_cal_tag <= 1'b1;
			end
			// To record the written number of words
			number <= counter;
			usb_data <= 0;
		end
		SELECT_WRITE_FIFO: begin
		   usb_slrd <= 1'b1;
			usb_slwr <= 1'b1;
			usb_sloe <= 1'b1;
			if(i_usb_flagd == 1'b1) begin
				usb_pkend <= 1'b1;
			end
			else begin
				usb_pkend <= 1'b0;
			end
			// select EP6
			usb_addr <= 2'b10;
			counter <= 0;
			usb_data <= 0;
		end
		WRITE_TO_USB: begin
		   usb_slrd <= 1'b1;
			usb_slwr <= ~usb_slwr;
			usb_sloe <= 1'b1;
			// select EP6
			usb_addr <= 2'b10;
			if ((usb_slwr == 1'b1) && (i_usb_flagd == 1'b1)) begin
				usb_data <= out_buff[counter];
				// usb_data <= buff[counter];
				counter <= counter + 1'b1;
				if (counter == (out_number - 1'b1)) begin
				// if (counter == (number - 1'b1)) begin
					usb_pkend <= 1'b0;
				end
			end
		end
		CALCULATE_CNN: begin
		    if (cal_count >= (number - 6)) begin
			     calcute_tag <= 1'b1;
				  to_cal_tag <= 1'b0;
			 end
		    else if (number > 0) begin
//			     if (itr == 1) begin 
//				      temp_data <= buff[cal_count];
//						itr <= itr + 1'b1;
//						cal_count <= cal_count + 1'b1;
//				  end
//				  else if (itr == 3 || itr == 5 || itr == 7) begin
//				      temp_data <= temp_data + buff[cal_count];
//						itr <= itr + 1'b1;
//						cal_count <= cal_count + 1'b1;
//				  end
//				  else if (itr == 9) begin
//				      out_buff[out_number] <= temp_data + buff[cal_count];
//						out_number <= out_number + 1'b1;
//						itr <= 1;
//						cal_count <= cal_count + 1'b1;
//				  end 
//				  else begin
//				      itr <= itr + 1'b1;
//				      cal_count <= cal_count + 1'b1;
//				  end
              if (itr == 0) begin
						out_buff[out_number] <= buff[cal_count]+buff[cal_count+2]+buff[cal_count+4]+buff[cal_count+6]+buff[cal_count+8];
						itr <= 1;
				  end
              else if (itr == 1) begin
				      out_buff[out_number] <= buff[cal_count+4];
						cal_count <= cal_count + 3;
						itr <= 0;
				  end
//				  out_buff[out_number+2] <= buff[cal_count]+buff[cal_count+1]+buff[cal_count+2]-buff[cal_count+6]-buff[cal_count+7]-buff[cal_count+8];
//				  out_buff[out_number+3] <= buff[cal_count]-buff[cal_count+2]+buff[cal_count+3]-buff[cal_count+5]+buff[cal_count+6]-buff[cal_count+8];
				  out_number <= out_number + 1;
			 end
		end
		default: begin
		    usb_slrd <= 1'b1;
			 usb_slwr <= 1'b1;
			 usb_sloe <= 1'b1;
			 usb_pkend <= 1'b1;
			 usb_addr <= 2'b00;
			 counter <= 0;
			 number <= 0;
			 out_number <= 0;
			 cal_count <= 0;
			 usb_data <= 0;
			 calcute_tag <= 0;
			 to_cal_tag <= 0;
		end
	endcase
end

always @(posedge i_usb_ifclk) begin
   state <= state_nxt;
end
endmodule
