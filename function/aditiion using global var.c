#include<stdio.h>
void sub(float x,float y);
void add(float x,float y);
void main()
{
    float a,b;
    printf("Enter 2 number");
    scanf("%f%f",&a,&b);
    add(a,b);
    sub(a,b);

}
void add(float x,float y)
{
    printf("sum =%f",x+y);              
}
void sub(float x, float y)
{
    printf("sub = %f",x-y);
}