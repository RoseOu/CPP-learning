// Student.cpp: implementation of the Student class.
//
//////////////////////////////////////////////////////////////////////

#include "Student.h"
#include <string>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Student::Student(long no, char * name, int score)
{
	this->no = no;
	strcpy(this->name, name);
	this->score = score;
}

Student::~Student()
{

}


long Student::getNo()
{
	return no;
}

const char * Student::getName()
{
	return name;
}

int Student::getScore()
{
	return score;
}