//编写一程序实现将用户输入的一字母字符串以反向形式输出。比如，输入的字母字符串是：abcdefg，输出为：gfedcba。

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,len,num;
	char s,str[100];
	
	len=0;

	//输入字符串，储存到数组中
	printf("Input the string: ");
	gets (str);

	//计算输入字符串的长度
	for(i=0;i<100;i++)
	{
		if (str[i]==0)
			break;
		else
			len=len+1;
	}


	//将字符串反向
	num=len;
	//当输入的字符串个数为偶数
	if(len%2==0)
	{
		for(i=0;i<(len/2);i++)
		{
			s=str[num-1];
			str[num-1]=str[i];
			str[i]=s;
			num=num-1;
		}
	}
	//当输入的字符串个数为奇数
	else
	{
		for(i=0;(i-1)<(len/2);i++)
		{
			s=str[num-1];
			str[num-1]=str[i];
			str[i]=s;
			num=num-1;
		}
	}

	puts (str);
	getche();
}