
// MFCApplication1View.cpp : CMFCApplication1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCApplication1.h"
#endif

#include "MFCApplication1Doc.h"
#include "MFCApplication1View.h"
#include "w32.h"
#include "Win32Project2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCApplication1View

IMPLEMENT_DYNCREATE(CMFCApplication1View, CView)

BEGIN_MESSAGE_MAP(CMFCApplication1View, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CMFCApplication1View ����/����

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View ����

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
	//���´���Ϊ��̬����
	//1.  ����һ����̬���ӿ���Ŀ����̬���к���һ������int factorial ( int n)���ú�������Ǹ�����n�Ľ׳˲����ؽ����
	//�ٽ���һ�������ĵ���ͼ�ṹ��MFC������Ondraw�е��øú������ڿͻ�������ʾfactorial(5) ��ֵ
	CString str;
	str.Format(_T("��̬���ӷ���:%d�Ľ׳˽����%d") ,5,factorial(5));
	pDC->TextOutW(200, 100, str);

	//������һ��ľ�̬���ӿ⣬ʹ�ÿ⺬��һ����FAC, ������һ����Ա����float convert(float deg), �书���ǰѽǶ�ֵdegת��Ϊ����ֵ�����ء�
	//��Ondraw�й�����Ķ��󣬵��ó�Ա����convert, ���ڿͻ�������ʾconvert(30.0) ��ֵ;
	FAC fac;					//����ʵ����
	str.Format(_T("��̬���ӷ���:%d�ȵĻ�����%f"),30, fac.convert(30));
	pDC->TextOutW(250, 150, str);


	//���´���Ϊ��̬����
	
	str.Format(_T("��̬���ӷ���:%d�Ľ׳˽����%d"), 5, factorial_dll(5));
	pDC->TextOutW(300, 200, str);
	FAC_dll fac_dll;					//����ʵ����
	str.Format(_T("��̬���ӷ���:%d�ȵĻ�����%f"), 30, fac_dll.convert(30));
	pDC->TextOutW(350, 250, str);

}

void CMFCApplication1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CMFCApplication1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CMFCApplication1View ���

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View ��Ϣ�������
