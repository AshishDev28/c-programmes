#include<stdio.h>
void main(){
    float a,l,b,r;
    int i;
    printf("enter 1 for circle ; 2 for rectangle ");
    scanf("%d",&i);
    switch (i)
    {
    case 1:printf("enter r");
        scanf("%f",r);
        a=3.14*r*r;
        printf("area =%f",a);
        break;
    case 2:printf("Enter l & b");
        scanf("%f%f",&l,&b);
        a=l*b;
        printf("area =%f",a);
        break;
    default:printf("wrong choice ");
        break;
    }
}