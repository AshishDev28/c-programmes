#include<stdio.h>
void main () {
    int i,j=5;
    float s=0;
    for ( i = 1; i <= 5; i++)
    {
        s=s+(float)(i*i)/(float)(6-i);
        j--;
    }
    printf("%f",s);
}