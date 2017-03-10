#include <iostream>
#include "stack.h"
using namespace std;

void main()
{
	Stack <double> p(3);
	p.push(1.11);
	p.push(1.22);
	p.push(1.33);
	cout<<p.pop()<<endl;
	cout<<p.pop()<<endl;
	p.push(1.44);
	cout<<p.pop()<<endl;
	system("pause");
}