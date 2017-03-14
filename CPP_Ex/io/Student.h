// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_STUDENT_H__F161349C_BB01_4C7F_AE78_EF36002C4706__INCLUDED_)
#define AFX_STUDENT_H__F161349C_BB01_4C7F_AE78_EF36002C4706__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <iostream>

using namespace std;

class Student
{
private:
	long no;
	char name[32];
	int score;

public:
	Student(long = 0, char * = "", int = 0);
	virtual ~Student();

	long getNo();
	const char * getName();
	int getScore();

};

#endif // !defined(AFX_STUDENT_H__F161349C_BB01_4C7F_AE78_EF36002C4706__INCLUDED_)
