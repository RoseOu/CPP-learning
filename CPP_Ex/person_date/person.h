// person.h: interface for the person class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__F93A97B2_553D_4C9D_953F_631E7FB3A24B__INCLUDED_)
#define AFX_PERSON_H__F93A97B2_553D_4C9D_953F_631E7FB3A24B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class person  
{
protected:
	char *name;

public:
	person();
	virtual ~person();

};

#endif // !defined(AFX_PERSON_H__F93A97B2_553D_4C9D_953F_631E7FB3A24B__INCLUDED_)
