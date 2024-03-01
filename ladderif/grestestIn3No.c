#include<stdio.h>
void main ()
{
    float a, b, c;
    printf("enter 3 no.");
    scanf("%f%f%f",&a,&b,&c);
    if (a>b&&a>c){
        printf("%f0 is greater",a);
    }
    else if (b>c)
    {
        printf("%f os greator ",b);

    }
    else
    printf("%f is greator ",c);
    
}