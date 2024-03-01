#include<stdio.h>
float max(float x,float y);
void main(){
    float a,b;
    printf("Enter 2 no.");
    scanf("%f%f",&a,&b);
    printf("%F is greator",max(a,b));
}
float max(float x,float y)
{
    if (x>y)
    {
        return x;
    }
    else{
        return y;
    }
}