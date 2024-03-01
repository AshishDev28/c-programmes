#include<stdio.h>
void main(){
    int x;
    printf("Enter a value :");
    scanf("%d",&x);
    if (x%3==0&&x%5==0)
    {
    printf("is divisible by 3 or 5 both ");
    }
    else if (x%3==0)
    {
        printf("is div by 3");
    }
    else if(x%5==0)
    printf("is divisibe by 5");
    
        else
        printf("is not divide by 3 or 5");
}