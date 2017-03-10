#include <iostream>
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"
#include "queue.h"
using namespace std;

void main()
{
	// 构造对象
	Queue<Shape *>ss(10);
	int i;
	Shape *p,*q;

	for (i = 0; i < 10; i ++)
	{
		Shape *s;
		if (rand()%2) {
			s = new Rect(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
		} else
		{
			s = new Circle(rand() % 20, rand() % 20, rand() % 10);
		}
		ss.insert(s);
	}

	// 使用对象
	for (i=0; i<10; i++)
	{
		cout << ss.data[i]->tell() << ":" << ss.data[i]->area() << endl;
	}

	//结束程序，回收资源（内存）
	for (i = 0; i < 10; i ++)
	{
		delete ss.data[i];
	}

	system("pause");
}