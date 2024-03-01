#include<stdio.h>
void main(){
    int x,d,c=0;
    printf("Enter the number :");
    scanf("%d",&x);
    while (x>0)
    {
        d=x%10;
        if (d%2==0)
        {
            c++;
        }
        
        x=x/10;
     
    }
    printf("%d",c);
}