// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
Student::Student(long stu_no,char *stu_name,int stu_score)
{
	this->no=stu_no;
	this->name=stu_name;
	this->score=stu_score;
}

Student::~Student()
{

}

void Student::ShowStudent()
{
	cout<<no<<"\t"<<name<<"\t"<<score<<endl;
}

long Student::GetNO()
{
	return no;
}

char* Student::GetName()
{
	return name;
}

int Student::GetScore()
{
	return score;
}
