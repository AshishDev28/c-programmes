#include<stdio.h>
int fact(int x);
void main()
{
    int n,t;
    printf("Enter n");
    scanf("%d",&n);
    printf("%d",fact);
}
int fact(int x)
{
    int i,f=1;
    for(i=x;i>0;i--)
    {
        f=f*i;


    }
    return (f);
}