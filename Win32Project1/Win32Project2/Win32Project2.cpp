// Win32Project2.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32Project2.h"


// ���ǵ���������һ��ʾ��
WIN32PROJECT2_API int nWin32Project2=0;

// ���ǵ���������һ��ʾ����
WIN32PROJECT2_API int fnWin32Project2(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32Project2.h
CWin32Project2::CWin32Project2()
{
    return;
}
//����׳˵ĺ�������
WIN32PROJECT2_API int factorial_dll(int n) {
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a *= i;
	}
	return a;
}

FAC_dll::FAC_dll() {

	return;
}
float  FAC_dll::convert(float deg) {
	float result = 0;

	result = deg / 180 * pi;

	return result;
}