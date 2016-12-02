// 编程计算a+aa+aaa+...+aa...a(n个a)的值，n和a的值由键盘输入。

#include <stdio.h>
#include <conio.h>

void main()
{
	int n,a,sum,num,x,y;

	printf("Input the 'a' here:");
	scanf("%d", &a);
	printf("Input the 'n' here:");
	scanf("%d", &n);

	sum = 0;
	num = 1;
	x = 1;
	y = 1;

	while (x <= n)
	{
		while (y <= x)
		{
			num = num * a;
			y = y + 1;
		}
		sum = sum + num;
		num = 1;
		y = 1;
		x = x + 1;
	}

	printf ("The result is:%d", sum);
	getche();
}