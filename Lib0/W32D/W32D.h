// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� W32D_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// W32D_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef W32D_EXPORTS
#define W32D_API __declspec(dllexport)
#else
#define W32D_API __declspec(dllimport)
#endif

// �����Ǵ� W32D.dll ������
class W32D_API CW32D {
public:
	CW32D(void);
	// TODO:  �ڴ�������ķ�����
};

extern W32D_API int nW32D;

W32D_API int fnW32D(void);
W32D_API int GetInt();