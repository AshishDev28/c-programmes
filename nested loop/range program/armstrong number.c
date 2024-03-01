#include<stdio.h>
void main (){
    int i,s,n,d;e3r4
    
    for (i=101;i<=900;i++)
    {
        n=i;
        s=0;
        while (n>0)
        {
            d=n%10;
            s=s+d*d*d;
            n=n/10;
        }
        if(n==s)
        printf("%d",i);
        
    }
}