#include <iostream>
#include "queue.h"
using namespace std;


void main()
{
	Queue <char> q(3);
	q.insert('A');
	q.insert('B');
	q.insert('C');
	if(q.is_full())
		cout<<"Queue is full."<<endl;
	else
		cout<<"Queue is not full."<<endl;
	cout<<q.remove()<<endl;
	cout<<q.remove()<<endl;
	q.insert('D');
	q.insert('E');
	if(q.is_empty())
		cout<<"Queue is empty."<<endl;
	else
		cout<<"Queue is not empty."<<endl;
	cout<<q.remove()<<endl;
	cout<<q.remove()<<endl;
	cout<<q.remove()<<endl;
	if(q.is_empty())
		cout<<"Queue is empty."<<endl;
	else
		cout<<"Queue is not empty."<<endl;

	
	Queue <double> p(3);
	p.insert(1.11);
	p.insert(2.22);
	p.insert(3.33);
	cout<<p.remove()<<endl;
	cout<<p.remove()<<endl;
	p.insert(4.44);
	cout<<p.remove()<<endl;

	system("pause");
}