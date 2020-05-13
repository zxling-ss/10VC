// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 WIN32PROJECT2_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// WIN32PROJECT2_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef WIN32PROJECT2_EXPORTS
#define WIN32PROJECT2_API __declspec(dllexport)
#else
#define WIN32PROJECT2_API __declspec(dllimport)
#endif

// 此类是从 Win32Project2.dll 导出的
class WIN32PROJECT2_API CWin32Project2 {
public:
	CWin32Project2(void);
	// TODO:  在此添加您的方法。
};

extern WIN32PROJECT2_API int nWin32Project2;

WIN32PROJECT2_API int fnWin32Project2(void);

#define pi 3.141592
//1.  建立一个静态链接库项目，静态库中含有一个函数int factorial ( int n)，该函数计算非负整数n的阶乘并返回结果；
//再建立一个基于文档视图结构的MFC程序，在Ondraw中调用该函数并在客户区中显示factorial(5) 的值
WIN32PROJECT2_API int factorial_dll(int n);
//改造上一题的静态链接库，使该库含有一个类FAC, 类中有一个成员函数float convert(float deg), 其功能是把角度值deg转化为弧度值并返回。
//在Ondraw中构造类的对象，调用成员函数convert, 并在客户区中显示convert(30.0) 的值;
class WIN32PROJECT2_API FAC_dll {

public:
	FAC_dll(void);
	float convert(float deg);
};