#include<stdio.h>
void main(){
    char str[100];
    int i,c=0;
    printf("Enter string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==" ")
        {
            c++;
        }
    }
    printf("%d",c);
}