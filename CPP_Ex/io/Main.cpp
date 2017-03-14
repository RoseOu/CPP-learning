// IO functions

#include <iostream>
#include <fstream>
#include "Student.h"
#include "DBase.h"
#include "DBase.cpp"

using namespace std;

void main()
{
	Student ss[3] = {Student(2006070001, "Li Ming", 70),
		Student(2006070002, "Hu Jun", 80),
		Student(2006070003, "Wang Tian", 90)};

	DBase<Student> db("d:/student.txt");
	// db.open();
	db.create();

	db.insert(&ss[0]);
	db.insert(&ss[1]);
	db.insert(&ss[2]);

	db.remove(2006070002); 
   
	Student s;
	db.load(2006070001, s);  
	cout << s.getNo() << "\t" << s.getName() << "\t" << s.getScore() << endl;

	Student * datas = db.loadAll();
	for (int i = 0; i < db.getCount(); i ++)
	{
		cout << datas[i].getNo() << "  " << datas[i].getName() << "  " << datas[i].getScore() << endl;
	}

	delete[] datas;

	// ¹Ø±ÕÊý¾Ý¿â
	db.close();
}