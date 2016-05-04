//(3)从键盘输入10个整数，编程实现将其中最大数与最小数的位置对换后，再输出调整后的数值。

#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10],i,j,max,min,c,d,e,numax,numin;

    for (i=0;i<10;i=i+1;)
    {
        printf ("Input the number %d:", i+1);
        scanf ("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i=0;i<10;i=i+1)
    {
        if (a[i]>=max)
        {
            c = max;
            max = a[i];
            numax = i;
        }
        if (a[i]<=min)
        {
            d = min;
            min = a[i];
            numin = i;
        }
    }

    e = a[numax];
    a[numax] = a[numin];
    a[numin] = e;

    printf ("The sorted numbers:\n");
    for (i=0;i<10;i=i+1)
        printf ("%d,", a[i]);

    getche();
}
