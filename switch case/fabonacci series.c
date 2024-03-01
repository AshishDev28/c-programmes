#include<stdio.h>
void main(){
    int n,a=0,b=1,c,i;
    printf("Enter the number :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
      printf("%d",a);
        break;
    case 2:
        printf("%d",b);
    default:  printf("%d,%d",a,b);
        for ( i = 1; i <=n-2; i++)
        {
            c=a+b;
            printf(",%d",c);
            a=b;
            b=c;
        }
        break;
    }
}