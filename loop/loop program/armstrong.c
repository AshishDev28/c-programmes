#include<stdio.h>
void main(){
    int n,d,s=0,n1;
    printf("enter the number :");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if (n1==s)
    {
        printf("armstrong");

    }
    else 
    {
        printf("not armstrong");
    }
}