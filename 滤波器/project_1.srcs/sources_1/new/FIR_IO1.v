`timescale 1ns / 1ps

module FIR_IO1
(
    input clk,                  //FPGA系统时钟/数据速率：2kHz
    input signed [11:0] Xin,    //数据输入频率为2kHZ
    output m_tvalid,            //FIR输出数据有效信号
    output signed [24:0] Yout   //滤波后的输出数据 
);

wire s_tready;
wire signed [31:0] m_tdata;
    
fir_compiler_1 fir_lowpass
(
        .aclk                 (clk),
        .s_axis_data_tvalid   (1'b1),
        .s_axis_data_tready   (s_tready),
        .s_axis_data_tdata    ({4'b0000,Xin}),
        .m_axis_data_tvalid   (m_tvalid),
        .m_axis_data_tdata    (m_tdata)
);

assign Yout =  m_tdata[24:0];

endmodule
