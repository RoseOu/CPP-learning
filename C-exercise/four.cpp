//在屏幕上显示一张如下所示的时间表：
//  *****Time*****
//  1     morning
//  2     afternoon
//  3     night
//操作人员根据提示进行选择，程序根据输入的时间序号显示相应的问候信息，选择1时显示“Good morning”，
//选择2时显示“Good afternoon”，选择3时显示“Good night”，对于其他的选择显示“Selection error!”，用switch语句编程。

#include <stdio.h>
#include <conio.h>

void main()
{
	int choice;

	printf("*****Time*****\n1     morning\n2     afternoon\n3     night\nPlease enter your choice:");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1: printf("Good morning"); break;
		case 2: printf("Good afternoon"); break;
		case 3: printf("Good night"); break;
		default: printf("Selection error!"); break;
	}

	getche();
}
