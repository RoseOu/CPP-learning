//题目：编一程序判断输入整数的正负性和奇偶性。

#include <stdio.h>
#include <conio.h>

void main()
{
	int num,i;

	printf("Input the number here:\n" );
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("A even number.\n");
	else
		printf("A odd number.\n" );
	if (num > 0)
		printf("A positive number.\n" );
	else if (num == 0)
		printf("Either a positive number or a negative number.\n" );
	else
		printf("A negative number\n");

	getche();
}