#include<stdio.h>
void main(){
    int i;
    float s=0;
    for ( i = 1; i <=9; i=i+2)
    {
        s=s+(float)(i)*(float)(i+1)/(float)(i+2)*(float)(i+3);

    }
    printf("%f",s);
    
}