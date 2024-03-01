#include<stdio.h>
struct complex 
{
    float a,b;

};

void main (){
    struct complex c1,c2,c3;
    printf ("Enter a & b \n");
    scanf("%f%F",&c1.a,&c1.b);
    printf ("Enter a & b\n");
    scanf("%f%f",&c2.a,&c2.b);

    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    printf("addition a=%f  ,b=%f",c3.a,c3.b);
}
