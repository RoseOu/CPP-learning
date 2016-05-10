//编写一程序，其功能是给一维数组a输入任意的6个整数，假设为：5 7 4 8 9
//1，然后建立一个具有以下内容的方阵，并打印。
//5 7 4 8 9 1
//1 5 7 4 8 9
//9 1 5 7 4 8
//8 9 1 5 7 4
//4 8 9 1 5 7
//7 4 8 9 1 5

#include <stdio.h>
#include <conio.h>

int main(){
    int i,a[6],b,c,d,e,f;

    for(i=0;i<6;i++){
        printf("Input the number %d:",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<6;i++){
        printf("%d %d %d %d %d %d \n", a[0],a[1],a[2],a[3],a[4],a[5]);
        b=a[0];
        c=a[1];
        d=a[2];
        e=a[3];
        f=a[4];
        a[0]=a[5];
        a[1]=b;
        a[2]=c;
        a[3]=d;
        a[4]=e;
        a[5]=f;
    }
}
