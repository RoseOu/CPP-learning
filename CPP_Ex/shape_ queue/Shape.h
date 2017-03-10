// Shape.h: interface for the Shape class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SHAPE_H__62DE731C_0A66_4871_9A5F_E2F0A0490C53__INCLUDED_)
#define AFX_SHAPE_H__62DE731C_0A66_4871_9A5F_E2F0A0490C53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Shape  
{
public:
	Shape();
	virtual ~Shape();

	virtual double area() = 0;
	virtual char * tell() = 0;
};

#endif // !defined(AFX_SHAPE_H__62DE731C_0A66_4871_9A5F_E2F0A0490C53__INCLUDED_)
