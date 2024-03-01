#include<stdio.h>
void main(){
    float a,b,c;
    printf("Enter angles of triangles :");
    scanf("%f%f%f",&a,&b,&c);
    if (a+b+c==180)
    {
        printf("valid ");
    }
    else
    {
        printf("invalid");
    }
}