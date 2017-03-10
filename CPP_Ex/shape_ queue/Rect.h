// Rect.h: interface for the Rect class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RECT_H__94CB30B1_440E_42DE_AB6E_192F2487F058__INCLUDED_)
#define AFX_RECT_H__94CB30B1_440E_42DE_AB6E_192F2487F058__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Shape.h"

class Rect : public Shape  
{
private:
	int x1, x2, y1, y2;
public:
	Rect();   // default
	Rect(int x1, int y1, int x2, int y2);
	virtual ~Rect();

	virtual double area();
	virtual char * tell();

	bool operator == (Rect r);
};

#endif // !defined(AFX_RECT_H__94CB30B1_440E_42DE_AB6E_192F2487F058__INCLUDED_)
