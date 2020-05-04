
// UsingLibDllView.cpp : CUsingLibDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingLibDll.h"
#endif

#include "UsingLibDllDoc.h"
#include "UsingLibDllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"w32.h"
#include"W32D.h"

// CUsingLibDllView

IMPLEMENT_DYNCREATE(CUsingLibDllView, CView)

BEGIN_MESSAGE_MAP(CUsingLibDllView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CUsingLibDllView ����/����

CUsingLibDllView::CUsingLibDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingLibDllView::~CUsingLibDllView()
{
}

BOOL CUsingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingLibDllView ����

void CUsingLibDllView::OnDraw(CDC* pDC)
{
	CUsingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	s=CString( pchar());
	pDC->TextOutW(200, 150, s);

	CString ss;
	ss.Format(_T("%d,���ǴӶ�̬���ӿⷵ�ص�ֵ��"), GetInt());
	pDC->TextOutW(200, 100, ss);
}


// CUsingLibDllView ��ӡ

BOOL CUsingLibDllView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CUsingLibDllView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CUsingLibDllView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CUsingLibDllView ���

#ifdef _DEBUG
void CUsingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLibDllDoc* CUsingLibDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLibDllDoc)));
	return (CUsingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLibDllView ��Ϣ�������
