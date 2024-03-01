#include<stdio.h>
void main(){
    int x,d,c;
    printf("enter n no.");
    scanf("%d",&x);
    while (x>0)
    {
        x=x/10;
        c++;
    }
    printf("%d",c);
}