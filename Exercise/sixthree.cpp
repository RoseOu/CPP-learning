// 编程计算 1!+2!+...+10! 的值。

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,sum,num,a;

	i = 1;
	a = 1;
	num = 1;
	sum = 0;

	while (i <= 10)
	{
		while (a <= i)
		{
			num = num * a;
			a = a + 1;
		}
		sum = sum + num;
		num = 1;
		i = i + 1;
		a = 1;
	}

	printf ("The result is:%d", sum);
	getche();
}
