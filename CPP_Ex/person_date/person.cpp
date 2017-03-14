// person.cpp: implementation of the person class.
//
//////////////////////////////////////////////////////////////////////

#include "person.h"
#include <string>
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

person::person()
{
	char namestr[50];
	cout<<"Name:";
	cin>>namestr;
	this->name=new char[strlen(namestr)+1];
	strcpy(this->name,namestr);
}

person::~person()
{

}
