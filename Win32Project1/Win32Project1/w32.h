#pragma once
#define pi 3.141592
//1.  ����һ����̬���ӿ���Ŀ����̬���к���һ������int factorial ( int n)���ú�������Ǹ�����n�Ľ׳˲����ؽ����
//�ٽ���һ�������ĵ���ͼ�ṹ��MFC������Ondraw�е��øú������ڿͻ�������ʾfactorial(5) ��ֵ
int factorial(int n);
//������һ��ľ�̬���ӿ⣬ʹ�ÿ⺬��һ����FAC, ������һ����Ա����float convert(float deg), �书���ǰѽǶ�ֵdegת��Ϊ����ֵ�����ء�
//��Ondraw�й�����Ķ��󣬵��ó�Ա����convert, ���ڿͻ�������ʾconvert(30.0) ��ֵ;
class FAC {
	
public:
	FAC();
	float convert(float deg);
};