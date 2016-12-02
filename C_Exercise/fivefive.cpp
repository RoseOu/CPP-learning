// 输入一个年份和月份，打印出该月份有多少天（考虑闰年），用switch语句编程。

#include <stdio.h>
#include <conio.h>

void main()
{
	int year,month,days;

	printf("Input the year here:");
	scanf("%d", &year);
	printf("Input the month here:");
	scanf("%d", &month);

	switch (month)
	{
		case 1: days = 31;break;
		case 2: {
					if (year % 400 == 0)
						days = 29;
					else if ((year % 4 == 0) && (year % 100 !=0))
						days = 29;
					else
						days = 28;
				}
				break;
		case 3: days = 31;break;
		case 4: days = 30;break;
		case 5: days = 31;break;
		case 6: days = 30;break;
		case 7: days = 31;break;
		case 8: days = 31;break;
		case 9: days = 30;break;
		case 10: days = 31;break;
		case 11: days = 30;break;
		case 12: days = 31;break;
	}
	
	printf("This month has %d days.", days);
	getche();

}