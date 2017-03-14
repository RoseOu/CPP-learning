// professor.h: interface for the professor class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PROFESSOR_H__749046FA_003B_4949_9857_75378C8FA672__INCLUDED_)
#define AFX_PROFESSOR_H__749046FA_003B_4949_9857_75378C8FA672__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "person.h"
#include "date.h"

class professor : public person  
{
private:
	int NO;
	char major[10];
	date birthday;

public:
	professor();
	virtual ~professor();
	virtual void display();

};

#endif // !defined(AFX_PROFESSOR_H__749046FA_003B_4949_9857_75378C8FA672__INCLUDED_)
