//从键盘输入任意正整数，编程判断该数是否为回文数。所谓回文数就是从左到右读这个数与从右到左读这个数是一样的。
//例如，12321、4004都是回文数。

#include <stdio.h>
#include <conio.h>

void main()
{
	int x,num,i,m;
	
	num = 0;
	i = 0;
	
	scanf ("%d", &x);
	m = x;

	while (m%10!=0)
	{	

		i = m%10;
		m = m/10;
		num = num*10+i;
	}
	if	(num == x)
		printf ("True");
	else
		printf ("False");
	getche();
}
