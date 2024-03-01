#include<stdio.h>
void main(){
    int x,d,s=0;
    printf("enter nno.");
    scanf("%d",&x);
    while (x>0)
    {
        d=x%10;
        s=s+d;
        x=x/10;
    }
    printf("%d",s);
}