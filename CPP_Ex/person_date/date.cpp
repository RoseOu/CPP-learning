// date.cpp: implementation of the date class.
//
//////////////////////////////////////////////////////////////////////

#include "date.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

date::date()
{
	cout<<"Birthday:";
	cin>>this->year>>this->month>>this->day;
}

date::~date()
{

}

void date::display()
{
	cout<<this->year<<"-"<<this->month<<"-"<<this->day;
}
