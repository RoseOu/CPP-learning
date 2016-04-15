// 编程计算 1x2x3+3x4x5+...+99x100x101 的值。

#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c,sum;

	a = 1;
	b = 2;
	c = 3;
	sum = 0;

	while (a <= 99)
	{
		sum = sum + (a * b * c);
		a = a + 1;
		b = b + 1;
		c = c + 1;
	}

	printf("The result:%d", sum);
	getche();
}
