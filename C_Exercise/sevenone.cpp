//编程实现从键盘任意输入20个整数，统计非负数个数，并计算非负数之和。

#include <stdio.h>
#include <conio.h>

void main()
{
	int a[20],i,num,sum;

	i = 0;
	num = 0;
	sum = 0;

	while (i < 20)
	{
		printf ("Input the number %d:", i+1);
		scanf ("%d", &a[i]);
		if (a[i] % 2 == 0)
		{
			num = num + 1;
			sum = sum + 1;
		}
		i = i + 1;
	}

	printf ("The numbers of non-negative number is: %d", num);
	printf ("The sum of non-negative number is:%d",sum);
	getche();
}