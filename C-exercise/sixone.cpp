// 编程计算 2+4+6+...+98+100 的值。

#include <stdio.h>
#include <conio.h>

void main()
{
	int sum,num;

	sum = 0;
	num = 2;

	while (num <= 100)
	{
		sum = sum + num;
		num = num + 2;
	}

	printf("sum:%d",sum);
	getche();
}