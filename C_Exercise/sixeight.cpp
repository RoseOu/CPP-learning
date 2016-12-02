//从键盘上任意输入一个整数x，编程计算x的每一位数字相加之和（忽略整数前的正负号）。例如，输入x为1234，
//则由1234分离出1、2、3、4四个数字，然后计算1+2+3+4=10，并输出10.

#include <stdio.h>
#include <conio.h>

void main()
{
	int x,m,num;

	scanf ("%d", &x);

	if (x < 0)
		x = -x;

	m = x;
	num = m % 10;

	while (m / 10 != 0)
	{
		m = m / 10;
		num = num + (m % 10); 
	}
	
	printf("The result is %d", num);
	getche();
}