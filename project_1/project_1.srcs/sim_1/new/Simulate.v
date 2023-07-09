`timescale 1 ps/ 1 ps

module Simulate();

reg [11:0] Xin;
reg[11:0] Xin1;
reg clk;
wire m_tvalid;
wire [24:0]  Yout;
wire [24:0] Yout1;
                       
FIR_IO i1 (
	.Xin(Xin),
	.Yout(Yout),
	.clk(clk),
	.m_tvalid(m_tvalid)
);

FIR_IO1 i11 (
	.Xin(Xin1),
	.Yout(Yout1),
	.clk(clk),
	.m_tvalid(m_tvalid)
);

parameter clk_period=626; //����ʱ���ź����ڣ�Ƶ�ʣ�:1.6MHz
//parameter clk_period_data=clk_period*13;
parameter clk_half_period=clk_period/2;
//parameter clk_half_period_data=clk_half_period*13;
parameter data_num=2000;  //�������ݳ���
parameter time_sim=data_num*clk_period; //����ʱ��

initial
begin
	//����ʱ���źų�ֵ
	clk=1;
	//���÷���ʱ��
	#time_sim $finish;
	//���������źų�ֵ
	Xin=12'd10;
end

//����ʱ���ź�
always                                                 
	#clk_half_period clk=~clk;
//always
//	#clk_half_period_data clk_data=~clk_data;

//���ⲿTX�ļ�(SinIn.txt)����������Ϊ���Լ���
integer Pattern;
reg [11:0] stimulus[1:data_num];
reg [11:0] data_men[1:data_num];
initial
begin
	$readmemb("E:/project_1/SinIn.txt",stimulus);
	$readmemb("E:/project_1/wave.txt",data_men);
	Pattern=0;
	repeat(data_num)
		begin
			Pattern=Pattern+1;
			Xin=stimulus[Pattern];
			Xin1=data_men[Pattern];
			//#clk_period_data;//��������Ϊʱ�����ڵ�8��
			#clk_period;//��������Ϊʱ�����ڵ�8��
		end
end

endmodule
