#include<stdio.h>
void main(){
    int s=0,i;
    for ( i = 1; i <= 9; i=i+2)
    {
        s=s+(i*i);
    }
    for ( i = 2; i <=10; i=i+2)
    {
        s=s-(i*i*i);
    }
    printf("%d",s);
}