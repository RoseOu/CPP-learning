// student.h: interface for the student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__6D6C2FCA_B192_48AE_BC6C_7E44B2BD2C3E__INCLUDED_)
#define AFX_STUDENT_H__6D6C2FCA_B192_48AE_BC6C_7E44B2BD2C3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "person.h"
#include "date.h"

class student : public person  
{
private:
	int ID;
	int score;
	date birthday;

public:
	student();
	virtual ~student();
	virtual void display();

};

#endif // !defined(AFX_STUDENT_H__6D6C2FCA_B192_48AE_BC6C_7E44B2BD2C3E__INCLUDED_)
