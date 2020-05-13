#pragma once
#define pi 3.141592
//1.  建立一个静态链接库项目，静态库中含有一个函数int factorial ( int n)，该函数计算非负整数n的阶乘并返回结果；
//再建立一个基于文档视图结构的MFC程序，在Ondraw中调用该函数并在客户区中显示factorial(5) 的值
int factorial(int n);
//改造上一题的静态链接库，使该库含有一个类FAC, 类中有一个成员函数float convert(float deg), 其功能是把角度值deg转化为弧度值并返回。
//在Ondraw中构造类的对象，调用成员函数convert, 并在客户区中显示convert(30.0) 的值;
class FAC {
	
public:
	FAC();
	float convert(float deg);
};