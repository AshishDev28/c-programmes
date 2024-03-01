#include<stdio.h>
void main (){
   int x,a[100],i=0,j;
   printf("Enter number .");
   scanf("%d",&x);
   while (x>0)
   {
    a[i]=x/2;
    i++;
    x=x/2;
   }
   for (j=i-1;j>=0;j--)
   printf("%d",a[j]);
}