#include<stdio.h>
void main (){
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=5;j>=1;j--)
        {
            if (j>i)
            printf(" ");
            else if (i%2==0)
            {
                printf("0");
            }
            else 
                printf("1");
        }
        printf("\n");
    }
}