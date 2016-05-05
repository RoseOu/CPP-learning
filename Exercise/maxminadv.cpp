//求10个整数的最大值，最小值，平均值。

#include <stdio.h>
#include <conio.h>

void main()
{
	int a[10],max,min,i,total=0;
	float average;

	for(i=0;i<10;i++)
	{
		printf("Input the number %d:", i+1);
		scanf("%d", &a[i]);
	}

	max=a[0];
	min=a[0];

	for(i=1;i<10;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}

	for(i=0;i<10;i++)
		total=total+a[i];
	average=(float)total/10;

	printf("max:%d\n",max);
	printf("min:%d\n",min);
	printf("average:%f",average);

	getche();
}