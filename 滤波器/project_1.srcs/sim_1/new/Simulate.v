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

parameter clk_period=626; //设置时钟信号周期（频率）:1.6MHz
//parameter clk_period_data=clk_period*13;
parameter clk_half_period=clk_period/2;
//parameter clk_half_period_data=clk_half_period*13;
parameter data_num=2000;  //仿真数据长度
parameter time_sim=data_num*clk_period; //仿真时间

initial
begin
	//设置时钟信号初值
	clk=1;
	//设置仿真时间
	#time_sim $finish;
	//设置输入信号初值
	Xin=12'd10;
end

//产生时钟信号
always                                                 
	#clk_half_period clk=~clk;
//always
//	#clk_half_period_data clk_data=~clk_data;

//从外部TX文件(SinIn.txt)读入数据作为测试激励
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
			//#clk_period_data;//数据周期为时钟周期的8倍
			#clk_period;//数据周期为时钟周期的8倍
		end
end

endmodule
