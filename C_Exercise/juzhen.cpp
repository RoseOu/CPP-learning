//输入NxN阶的矩阵，编程实现：（1）输出这个矩阵。（2）求两条对角线上的各元素之和。（3）用户输入x，求第x行上各元素之和。

#include <stdio.h>
#include <conio.h>
#define N 3

void main()
{
	int i,j,left,right,x,sum,a[N][N];

	left=0;
	right=0;

	//输入NxN的矩阵
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			printf("Input the number of line %d and list %d:  ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}

	//输出这个矩阵
	for(i=0;i<N;i++)
	{	
		for(j=0;j<N;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	//求两条对角线元素的和
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==j)
				left = left+a[i][j];
			if((i+j)==(N-1))
				right = right+a[i][j];
		}
	}

	//输入x
	printf("Input the 'x':");
	scanf("%d", &x);

	sum=0;

	//求第n行元素和
	for(j=0;j<N;j++)
	{
		sum = sum+a[x-1][j];
	}


	printf("The sum of left diagonal is: %d\n", left);
	printf("The sum of right diagonal is: %d\n", right);
	printf("The sum of line %d is: %d", x,sum);
	getche();

}
