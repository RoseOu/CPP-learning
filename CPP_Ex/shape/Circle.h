// Circle.h: interface for the Circle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLE_H__DE54B557_BE56_4B01_AFDE_8487249126E4__INCLUDED_)
#define AFX_CIRCLE_H__DE54B557_BE56_4B01_AFDE_8487249126E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Shape.h"

#define    PI    3.1415926

class Circle : public Shape  
{
private:
	int x1, y1;
	int r;
public:
	Circle();
	Circle(int x1, int y1, int r);
	virtual ~Circle();

	virtual double area();
	virtual char * tell();
};

#endif // !defined(AFX_CIRCLE_H__DE54B557_BE56_4B01_AFDE_8487249126E4__INCLUDED_)
