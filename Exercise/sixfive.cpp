//(5)利用π/2≈2/1*2/3*4/3*4/5*6/5*6/7*...前100项之积计算π的值。

#include <stdio.h>
#include <conio.h>

void main()
{
	float pai,a,b,d;
	int c;

	a = 2;
	b = 1;
	c = 1;
	pai = 1;

	while (c <= 100)
	{
		pai = pai * (a / b);
		if (c % 2 != 0)
		{
			d = a;
			a = b + 1;
			b = d + 1;
			c = c + 1;
		}
		else
		{
			a = a + 2;
			c = c + 1;
		}
	}
	pai = pai * 2;

	printf ("pai=%f", pai);
	getche();
}