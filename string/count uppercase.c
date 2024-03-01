#include<stdio.h>
void main(){
    int i,c=0;
    char str[100];
    printf("enter string:");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    {
        if(str[i]>='A' && str[i]<='Z')
        {c++;
        }
    }
    printf("%d",c);
}