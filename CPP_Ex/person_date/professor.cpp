// professor.cpp: implementation of the professor class.
//
//////////////////////////////////////////////////////////////////////

#include "professor.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

professor::professor()
{
	cout<<"Teacher ID:";
	cin>>this->NO;
	cout<<"schoolteaching major:";
	cin>>this->major;
}

professor::~professor()
{

}

void professor::display()
{
	cout<<"The basic information:"<<endl;
	cout<<this->NO<<"\t"<<this->name<<"\t"<<this->major<<"\t";
	this->birthday.display();
	cout<<endl;
}
