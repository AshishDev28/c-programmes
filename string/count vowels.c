#include<stdio.h>
void main (){
    char str[100];
    int i,c=0;
    printf("Enter string ");
    gets(str);
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
           c++;
        }
    }
    printf("%d",c);
}