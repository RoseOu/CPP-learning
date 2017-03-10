// Rect.cpp: implementation of the Rect class.
//
//////////////////////////////////////////////////////////////////////

#include "Rect.h"
#include "math.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Rect::Rect()
{
}
Rect::Rect(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

Rect::~Rect()
{

}

double Rect::area()
{
	return abs((x1 - x2)*(y1 - y2));
}

char * Rect::tell()
{
	return "Rect";
}

bool Rect::operator == (Rect r)
{
	return abs(x1 - x2) == abs(r.x1 - r.x2)
		&& abs(y1 - y2) == abs(r.y1 - r.y2);
}