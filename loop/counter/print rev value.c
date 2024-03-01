#include<stdio.h>
void main(){
    int x,d;
    printf("Enter the number :");
    scanf("%d",&x);
    while (x>0)
    {
        d=x%10;
        printf("%d",d)
        x=x/10;
     
    }
    
}