#include<stdio.h>
void main(){
    int a=0,b=1,n,c,i;
    printf("nth term of fabbonacci series ");
    printf("enter term: ");
    scanf("%d",&n);

     if (n==1)
    {
        printf("%d",a);
        
    }
    else if (n==2)
    {
        printf("%d",b);
    }
    else{
        for ( i = 1; i <=n-2; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",c);
    }
    
}
