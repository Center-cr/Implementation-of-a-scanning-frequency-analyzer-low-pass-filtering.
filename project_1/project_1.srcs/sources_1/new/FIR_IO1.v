`timescale 1ns / 1ps

module FIR_IO1
(
    input clk,                  //FPGAϵͳʱ��/�������ʣ�2kHz
    input signed [11:0] Xin,    //��������Ƶ��Ϊ2kHZ
    output m_tvalid,            //FIR���������Ч�ź�
    output signed [24:0] Yout   //�˲����������� 
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
