#include<stdio.h>
void main(){
    int i,s=0;
    for ( i = 1; i <= 10; i=i+2)
    {
        s=s+i;
    }
    printf("%d",s);
}