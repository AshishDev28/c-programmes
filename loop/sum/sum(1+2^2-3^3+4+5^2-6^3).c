#include<stdio.h>
void main(){
    int i,s=0;
    for ( i = 1; i <=10; i=i+3)
    {
        s=s+i;
    }
    for ( i = 2; i <=10; i=i+3)
    {
        s=s+(i*i);
    }
    for ( i = 3; i <= 10; i=i+3)
    {
        s=s-(i*i*i);
    }
    printf("%d",s);
}