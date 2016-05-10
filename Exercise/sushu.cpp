//求一定范围内素数个数。

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define RANGE 100

void main()
{
	int num=2,i,n=1;

	while(num<=RANGE)
	{
		for(i=2;i<=num;i++)
		{
			if(num%i==0)
				break;
			else
			{
				if(i<(num-1))
					continue;
				if(i==(num-1))
					n=n+1;
			}
		}
		num = num + 1;
	}

	printf("There are %d prime number\n",n);
	getche();
}