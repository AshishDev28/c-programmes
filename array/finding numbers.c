#include<stdio.h>
void main(){
    int x[10],i,item;
    printf("Enter number :");
    for (i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter no. to be searched:");
    scanf("%d",&item);
    for (i=0;i<10;i++)
    {
        if (x[i]==item)
        {
            printf("found");
            brea k;
        }
    }
    if(i==10)
    {
        printf("not found");
    }
}