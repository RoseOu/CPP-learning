
#include <iostream>
// 定义类
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"
using namespace std;

void main()
{
	// 构造对象
	Shape * ss[10];
	int i;

	for (i = 0; i < 10; i ++)
	{
		if (rand()%2) {
			ss[i] = new Rect(rand() % 20, rand() % 20, rand() % 20, rand() % 20);
		} else
		{
			ss[i] = new Circle(rand() % 20, rand() % 20, rand() % 10);
		}
	}

	// 使用对象
	for (i = 0; i < 10; i ++)
	{
		cout << ss[i]->tell() << ":" << ss[i]->area() << endl;
	}

	//结束程序，回收资源（内存）
	for (i = 0; i < 10; i ++)
	{
		delete ss[i];
	}
}