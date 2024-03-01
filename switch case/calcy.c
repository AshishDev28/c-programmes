#include<stdio.h>
void main(){
    float a,b,c;
    int  i;
    printf("enter 2 number ");
    scanf("%f%f",&a,&b);
    printf("1 for +,2 for -,3 for *,4 for /");
    scanf("%d",&i);

    switch (i)
    {
    case 1:c=a+b;
        printf("sum =%f",c);
        break;
    case 2:c=a-b;
        printf("sub =%f",c);
        break;
    case 3:c=a*b;
        printf("mul =%f",c);
        break;
    case 4:c=a/b;
        printf("div =%f",c);
    default:printf("wrong choice");
        break;
    }
}