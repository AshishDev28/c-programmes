#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    float a,b;
    printf("Enter two number:");
    scanf("%f%f",&a,&b);
    printf("%f10",a+b);
}