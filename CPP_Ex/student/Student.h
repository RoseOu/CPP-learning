// Student.h: interface for the Student class.
//
//////////////////////////////////////////////////////////////////////

#include <stdlib.h>

#if !defined(AFX_STUDENT_H__2D2F1E0A_C511_42D1_9C17_EFCF354AA200__INCLUDED_)
#define AFX_STUDENT_H__2D2F1E0A_C511_42D1_9C17_EFCF354AA200__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Student  
{
private:
	long no;
	char * name;
	int score;

public:
	Student(long stu_no=0,char *stu_name=NULL,int stu_score=0);
	virtual ~Student();
	virtual void ShowStudent();
	virtual long GetNO();
	virtual char * GetName();
	virtual int GetScore();
};

#endif // !defined(AFX_STUDENT_H__2D2F1E0A_C511_42D1_9C17_EFCF354AA200__INCLUDED_)
