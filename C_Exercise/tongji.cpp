//先输入n，然后依次输入n个数，显示出这n个数，最后求n个数中偶数的个数。

#include <stdio.h>
#include <conio.h>
#define MAX 100       

void main()
{
	int i,n,num,a[MAX];

	num=0;

	//输入n的数值
	printf("Input the number 'n':");
	scanf("%d", &n);

	//依次输入n个数
	for(i=0;i<n;i++)
	{
		printf("Input the number %d:", i+1);
		scanf("%d", &a[i]);
	}

	//输出所输入的n个数
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
	
	//计算n个数中偶数的个数
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0 && a[i]!=0)
			num=num+1;
	}

	printf("\n");
	printf("The numbers of even numbers are: %d", num);

	getche();

}