// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WIN32PROJECT2_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WIN32PROJECT2_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WIN32PROJECT2_EXPORTS
#define WIN32PROJECT2_API __declspec(dllexport)
#else
#define WIN32PROJECT2_API __declspec(dllimport)
#endif

// �����Ǵ� Win32Project2.dll ������
class WIN32PROJECT2_API CWin32Project2 {
public:
	CWin32Project2(void);
	// TODO:  �ڴ�������ķ�����
};

extern WIN32PROJECT2_API int nWin32Project2;

WIN32PROJECT2_API int fnWin32Project2(void);

#define pi 3.141592
//1.  ����һ����̬���ӿ���Ŀ����̬���к���һ������int factorial ( int n)���ú�������Ǹ�����n�Ľ׳˲����ؽ����
//�ٽ���һ�������ĵ���ͼ�ṹ��MFC������Ondraw�е��øú������ڿͻ�������ʾfactorial(5) ��ֵ
WIN32PROJECT2_API int factorial_dll(int n);
//������һ��ľ�̬���ӿ⣬ʹ�ÿ⺬��һ����FAC, ������һ����Ա����float convert(float deg), �书���ǰѽǶ�ֵdegת��Ϊ����ֵ�����ء�
//��Ondraw�й�����Ķ��󣬵��ó�Ա����convert, ���ڿͻ�������ʾconvert(30.0) ��ֵ;
class WIN32PROJECT2_API FAC_dll {

public:
	FAC_dll(void);
	float convert(float deg);
};