
// MFCApplication1View.cpp : CMFCApplication1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CMFCApplication1View 构造/析构

CMFCApplication1View::CMFCApplication1View()
{
	// TODO: 在此处添加构造代码

}

CMFCApplication1View::~CMFCApplication1View()
{
}

BOOL CMFCApplication1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCApplication1View 绘制

void CMFCApplication1View::OnDraw(CDC* pDC)
{
	CMFCApplication1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
	//以下代码为静态链接
	//1.  建立一个静态链接库项目，静态库中含有一个函数int factorial ( int n)，该函数计算非负整数n的阶乘并返回结果；
	//再建立一个基于文档视图结构的MFC程序，在Ondraw中调用该函数并在客户区中显示factorial(5) 的值
	CString str;
	str.Format(_T("静态链接方法:%d的阶乘结果是%d") ,5,factorial(5));
	pDC->TextOutW(200, 100, str);

	//改造上一题的静态链接库，使该库含有一个类FAC, 类中有一个成员函数float convert(float deg), 其功能是把角度值deg转化为弧度值并返回。
	//在Ondraw中构造类的对象，调用成员函数convert, 并在客户区中显示convert(30.0) 的值;
	FAC fac;					//对象实例化
	str.Format(_T("静态链接方法:%d度的弧度是%f"),30, fac.convert(30));
	pDC->TextOutW(250, 150, str);


	//以下代码为动态链接
	
	str.Format(_T("动态链接方法:%d的阶乘结果是%d"), 5, factorial_dll(5));
	pDC->TextOutW(300, 200, str);
	FAC_dll fac_dll;					//对象实例化
	str.Format(_T("动态链接方法:%d度的弧度是%f"), 30, fac_dll.convert(30));
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


// CMFCApplication1View 诊断

#ifdef _DEBUG
void CMFCApplication1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCApplication1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCApplication1Doc* CMFCApplication1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCApplication1Doc)));
	return (CMFCApplication1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCApplication1View 消息处理程序
