// student.cpp: implementation of the student class.
//
//////////////////////////////////////////////////////////////////////

#include "student.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

student::student()
{
	cout<<"Student ID:";
	cin>>this->ID;
	cout<<"Student score:";
	cin>>this->score;
}

student::~student()
{

}

void student::display()
{
	cout<<"The basic information:"<<endl;
	cout<<this->ID<<"\t"<<this->name<<"\t"<<this->score<<"\t";
	this->birthday.display();
	cout<<endl;
}