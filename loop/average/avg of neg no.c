#include<stdio.h>
void main(){
    int i,c=0;
    float x,s=0,avg;
    printf("Enter value");
    for ( i =1 ; i <=10; i++)
    {
        scanf("%f",&x);
        if(x<0)
        {s=s+x;
        c++;
        }
    }
    avg=s/(float)(c);
    printf("%f",avg);
}