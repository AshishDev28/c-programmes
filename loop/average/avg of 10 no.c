#include<stdio.h>
void main(){
    int i;
    float x,s=0,avg;
    printf("Enter value");
    for ( i =1 ; i <=10; i++)
    {
        scanf("%f",&x);
        s=s+x;
    }
    avg=s/10.0;
    printf("%f",avg);
}