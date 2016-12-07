//据泰勒多项式编程计算sinx的近似值.sinx≈x/1-x^3/3!+x^5/5!-x^7/7!+…….使最后一项数据的绝对值小于10^-5

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	//b为每项的分母，a为每项分子，s为结果
	int i,b;
	double a,x,s;
	
	printf("Input x:");
	scanf("%lf", &x);

	a=x;   
	b=1;    
	s=0.0;  


	for(i=0;fabs(a/b)>=1e-5;)
	{
		s=s+a/b;
		a=-a*x*x;
		i++;
		b=b*(2*i+1)*(2*i);
	}

	printf("sinx=%lf",s);
	getche();
}