#include<stdio.h>
void main()
{
    int i ,c,j;
    for (i=101;i<200;i++)
    {
        c=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            c++;
        }
        if (c==2)
        printf("%d\n",i);
    }
}