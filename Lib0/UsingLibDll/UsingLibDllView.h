
// UsingLibDllView.h : CUsingLibDllView ��Ľӿ�
//

#pragma once


class CUsingLibDllView : public CView
{
protected: // �������л�����
	CUsingLibDllView();
	DECLARE_DYNCREATE(CUsingLibDllView)

// ����
public:
	CUsingLibDllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CUsingLibDllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingLibDllView.cpp �еĵ��԰汾
inline CUsingLibDllDoc* CUsingLibDllView::GetDocument() const
   { return reinterpret_cast<CUsingLibDllDoc*>(m_pDocument); }
#endif

