#include<stdio.h>
void main(){
    int x[5],i;
    printf("Enter the number to be inserted :");
    for (i=0;i<5;i++)
    {
    scanf("%d",&x[i]);
    }
    printf("\noutput\n");
    for (i=0;i<5;i++)
    {
        printf("\n%d",x[i]);
    }
}