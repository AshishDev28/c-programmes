#include<stdio.h>
void main()
{
    int i,s=0,j,f;
    for ( i = 1; i <= 5; i++)
    {
        f=1;
        for (j=i;j>0;j--);
        {
            f=f*j;

        }
        s=s+f;
    }
    printf("%d",s);
    
}