#include<stdio.h>
void main(){
    int x[10],i,max;
    printf("enter the number to be inserted:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    max = x[0];
    for (i=0;i<10;i++)
    {
        if (x[i]>max)
        {
            max = x[i];
        }
    }
    printf("max = %d",max);
}