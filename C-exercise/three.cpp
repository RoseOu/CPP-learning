//输入任意三个数a，b，c，按从小到大的顺序排序输出。

#include <stdio.h>
#include <conio.h>

void main()
{
	float a,b,c;

	printf("Input number 'a' here:");
	scanf("%f", &a);
	printf("Input number 'b' here:");
	scanf("%f", &b);
	printf("Input number 'c' here:");
	scanf("%f", &c);

	if (a > b)
		if (a > c)
		{
			if (b > c)
				printf("c < b < a");
			else if (b == c)
				printf("c = b < a");
			else
				printf("b < c < a");
		}
		else if (a == c)
			printf("b < c = a");
		else
			printf("b < a < c");
	else if (a == b)
		if (a > c)
			printf ("c < b = a");
		else if (a == c)
			printf ("c = b = a");
		else
			printf ("b = a < c");
	else
		if (b > c)
			if (a > c)
				printf("c < a < b");
			else if (a == c)
				printf("c = a < b");
			else
				printf("a < c <b");
		else
			printf("a < b < c");

	getche();
}