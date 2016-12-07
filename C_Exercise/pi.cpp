//(5)利用π/2≈2/1*2/3*4/3*4/5*6/5*6/7*...前100项之积计算π的值。

#include <stdio.h>
#include <conio.h>

void main()
{
	//a为公式右边每一项的分子，b为分母，c为第n项的序数，
	float pi,a,b,d;
	int c;

	a = 2;
	b = 1;
	c = 1;
	pi = 1;

	while (c <= 100)
	{
		pi = pi * (a / b);
		//当前项为奇数时，后一项的分子等于当前项的分母加一，后一项的分母等于当前项的分子加一
		if (c % 2 != 0)
		{
			d = a;
			a = b + 1;
			b = d + 1;
			c = c + 1;
		}
		//当前项为偶数时，后一项的分子等于当前项的分母加二
		else
		{
			a = a + 2;
			c = c + 1;
		}
	}
	pi = pi * 2;

	printf ("pi=%f", pi);
	getche();
}