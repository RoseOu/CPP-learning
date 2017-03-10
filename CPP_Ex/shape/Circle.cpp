// Circle.cpp: implementation of the Circle class.
//
//////////////////////////////////////////////////////////////////////

#include "Circle.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Circle::Circle()
{
}
Circle::Circle(int x1, int y1, int r)
{
	this->x1 = x1;
	this->y1 = y1;
	this->r = r;
}

Circle::~Circle()
{

}

double Circle::area()
{
	return PI * r * r;
}

char * Circle::tell()
{
	return "Circle";
}