// date.h: interface for the date class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DATE_H__B03BEF02_DECA_4A51_ADD3_C3D5A0C93B82__INCLUDED_)
#define AFX_DATE_H__B03BEF02_DECA_4A51_ADD3_C3D5A0C93B82__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class date  
{
private:
	int year;
	int month;
	int day;

public:
	date();
	virtual ~date();
	virtual void display();

};

#endif // !defined(AFX_DATE_H__B03BEF02_DECA_4A51_ADD3_C3D5A0C93B82__INCLUDED_)
