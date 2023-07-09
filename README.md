---
title: 频谱仪设计
date: 2023-07-01
updated:  2023-07-01
tags: 电子创新设计
categories: 专业课
keywords:
description:
top_img:
comments:
cover: https://raw.githubusercontent.com/Center-cr/picture/main/202307091549757.png
toc:
toc_number:
toc_style_simple:
copyright:
copyright_author:
copyright_author_href:
copyright_url:
copyright_info:
mathjax:
katex:
aplayer:
highlight_shrink:
aside:
abcjs:

---




## 产生波形-matlab->vivado

### 参考

[ Matlab产生TestBeach所需要的波形数据\_weixin\_30752377的博客-CSDN博客](https://blog.csdn.net/weixin_30752377/article/details/97185368)



### matlab 生成.txt二进制波形文件文件

```matlab
 %=============设置系统参数==============%
 f1=5e4;        %设置波形频率
 f2=30e4;
 f3=10e4;
 Fs=50e6;        %设置采样频率
 L=1024;         %数据长度
 N=14;           %数据位宽
 %=============产生输入信号==============%
 t=0:1/Fs:(1/Fs)*(L-1);
 y1=sin(2*pi*f1*t);
 y2=sin(2*pi*f2*t);
 y3=sin(2*pi*f3*t);
 y4=y1+y2+y3;
 y_n=round(y4*(2^(N-3)-1));      %N比特量化;如果有n个信号相加，则设置（N-n）
 %=================画图==================%
 a=10;           %改变系数可以调整显示周期
 stem(t,y_n);
 axis([0 L/Fs/a -2^N 2^N]);      %显示
 
 

fid=fopen('D:\MyFiles\Vivado_workplace\project_8 - Copy/sin_data.txt','w');
N=14;
for k = 1:1:length(y_n)
    B_s =dec2bin(y_n(k)+((y_n(k))<0)*2^N,N);
   for j=1:N
         if B_s(j)=='1'
             tb=1;
         else
           tb=0;
         end
     fprintf(fid,'%d',tb);
    end
    fprintf(fid,'\r\n');
 end
 
 fprintf(fid,';');
fclose(fid);

```

### vivado 读取波形文件

仿真

```VHDL
 `timescale 1ns/1ps
 
 module TB_readfile();
 reg     SCLK;
 reg    [13:0]  data_out;
//  //。。。。。。。时钟。。这里没有。。。。。。。  
//  reg clk,clr; 
//    initial begin
//    clk=0;clr=0;
//    #2 clr=1;
//    end
//    always@(*)#5 clk<=~clk;
// //。。。。。。。。。。。。。。。。。。
 
 //-------------------------------------//
 parameter data_num = 32'd1024;
 integer   i = 0;
 reg [13:0]  data_men[1:data_num];
 reg [13:0]  data_reg = 0;
 initial begin
     $readmemb("D:/MyFiles/Vivado_workplace/project_8 - Copy/sin_data.txt",data_men);
 end
 always @(posedge SCLK) begin
     data_out <= data_men[i];
     if(i== 1024)begin
     i<=0;
     end
     else
     begin
     i <= i + 8'd1;
     end
 end
 //------------------------------------//
 
 //--------------时钟部分----------------//
 initial     SCLK = 0;
 always      #10     SCLK = ~SCLK;
 
 
 endmodule // 
```



### 复现

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622031725992.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091621238.png)

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622031545516.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091621634.png)

### 让波形具有更多高频分量





## 数字滤波

滤去过高的不必要的频率

使用低通滤波器

### 参考

[FPGA数字信号处理（五）Vivado FIR IP核实现_vivado 希尔伯特变换_FPGADesigner的博客-CSDN博客](https://blog.csdn.net/fpgadesigner/article/details/80621411)

### COE文件MTALAB生成

[(MATLAB生成FPGA COE文件之XILINX FPGA滤波器系数_风中月隐的博客-CSDN博客](https://blog.csdn.net/u014586651/article/details/109768873)

matlab命令行输入：

```
 filterDesigner
```

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626170825959.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091621243.png)

### IP核配置

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622173526140.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622395.png)

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622173335200.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091621903.png)

这里源项目都是0.002MHz

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622174010986.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091621376.png)

### 移植与复现

##### 源项目地址vivado

https://wwsr.lanzoum.com/iOEXM0zr2xve

##### 移植与复现

https://wwsr.lanzoum.com/iEbVY0zr3ahi



![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622180505629.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091621399.png)

### 需要更改的地方

1、matlab滤波系数生成

2、IP核采样频率和时钟频率

### 项目修改（更新）

做了一个参数如下的滤波器：截止频率20MHz的低通滤波器并导出coe文件

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626172151760.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622226.png)

再加一个FIR IP核，采样率和时钟频率更改为50MHz

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626172534182.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622731.png)

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626172718581.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622797.png)

Xin1/Yout1为改动后的输入/输出，Xin/Yout为原来项目的输入/输出

Xin1的频率组成如下：

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626173027057.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091623564.png)

matlab输出的y_n就是vivado的Xin

##### 项目地址vivado+matlab

https://wwsr.lanzoum.com/iy3rb10hes3e

## 数字检波(==更新==)

包络检波法？

### 参考

[FPGA数字信号处理（十一）ASK解调技术_ask解调波形_FPGADesigner的博客-CSDN博客](https://bestfpga.blog.csdn.net/article/details/80718367?spm=1001.2014.3001.5502)

[FPGA数字信号处理（23）FSK解调技术（包络检波法）_数字包络检波原理_FPGADesigner的博客-CSDN博客](https://blog.csdn.net/FPGADesigner/article/details/81170928)

原理：低通滤波器（截止频率靠近输入信号的频率）

检出包络如下（Xin1输入，Yout1输出包络）：

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626233108325.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622759.png)

### matlab代码

```matlab
 %=============设置系统参数==============%
 f1=5e4;        %设置波形频率
 f2=20e4;
 f3=20e6;
 Fs=50e6;        %设置采样频率
 L=1024;         %数据长度
 N=12;           %数据位宽
 %=============产生输入信号==============%
 t=0:1/Fs:(1/Fs)*(L-1);
 y1=sin(2*pi*f1*t);
 y2=sin(2*pi*f2*t);
 y3=sin(2*pi*f3*t);
 y5=sin(2*pi*f1*t+pi/2);
 y6=sin(2*pi*f1*t);
 
 y4=y1+y2+y3+y5+y6;
 y_n=round(y4*(2^(N-5)-1));      %N比特量化;如果有n个信号相加，则设置（N-n）
 %=================画图==================%
 a=10;           %改变系数可以调整显示周期
 stem(t,y_n);
 axis([0 L/Fs/a -2^N 2^N]);      %显示
 
 

fid=fopen('E:\project_1\wave.txt','w');
N=14;
for k = 1:1:length(y_n)
    B_s =dec2bin(y_n(k)+((y_n(k))<0)*2^N,N);
   for j=1:N
         if B_s(j)=='1'
             tb=1;
         else
           tb=0;
         end
     fprintf(fid,'%d',tb);
    end
    fprintf(fid,'\r\n');
 end
 
 fprintf(fid,';');
fclose(fid);

```

### 代码说明

#### 产生滤波系数

利用 filterDesigner工具产生coe文件

#### 

#### 产生txt波形文件

round函数是取整数，比特量化的结果是把y_n的最大值抬到12位二进制数，注意N的设置和IP核那边输入数据的位数对应，不要超过

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230626233503734.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622928.png)

### matlab+vivado项目地址

https://wwsr.lanzoum.com/iUQOW10ieahg



### 问题

#### 数字滤波和数字检波到底区别在哪

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622035742507.png](http://bzjh.oss-cn-shanghai.aliyuncs.com/Typora_img/F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622035742507.png)

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622035939232.png](http://bzjh.oss-cn-shanghai.aliyuncs.com/Typora_img/F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622035939232.png)

包络检波法实质上是滤波，适用于调幅信号？

我们需要解调的应该是具有普遍性的信号

#### 输入的信号需要进行解调吗，用什么方式

最终目的是取得所有有效的频率分量，但是数字信号的输入是经过MCU系统的混频的，混频的目的是？混频得到的信号和原始信号相比发生什么改变？

![ F/TYOPORA_Note/专业课/电子创新设计/relative/image-20230622040611066.png](https://raw.githubusercontent.com/Center-cr/picture/main/202307091622686.png)

