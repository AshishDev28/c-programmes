#include<stdio.h>
void main (){
    int x;
    printf("Enter a year :");
    scanf("%d",&x);
    if (x%4==0)
    {
        printf("is leap year");
    }
    else 
    printf("not a leap year");
}