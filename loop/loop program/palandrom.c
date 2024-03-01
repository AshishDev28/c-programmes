#include<stdio.h>
void main(){
    int n1,r=0,n,d;
    printf("enter the number:");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if (n1==r)
    {
        printf("plandrome");
    }
    else
    {   printf("not plandrome");
    }
}