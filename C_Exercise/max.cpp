//求N个整数的最大值，最小值，平均值，并将其从小到大排序。

#include <stdio.h>
#include <conio.h>
#define N 10

void main()
{
	int a[N],max,min,i,j,c,total=0;
	float average;

	//输入N个正整数，储存到一个数组中
	for(i=0;i<N;i++)
	{
		printf("Input the number %d:", i+1);
		scanf("%d", &a[i]);
	}

	//求最大值和最小值
	max=a[0];
	min=a[0];
	for(i=1;i<N;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}

	//求平均值
	for(i=0;i<N;i++)
		total=total+a[i];
	average=(float)total/N;

	//将N个正整数从小到大排序
	for(i=1;i<N;i++)
		for(j=0;j<N;j++)
		{
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}

	printf("max:%d\n",max);
	printf("min:%d\n",min);
	printf("average:%f\n",average);
	printf("The sorted numbers:\n");
	for(i=0;i<N;i++)
		printf("%d ", a[i]);

	getche();
}