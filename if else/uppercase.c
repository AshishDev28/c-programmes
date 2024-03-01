#include<stdio.h>
void main(){
    char x;
    printf("Enter a char :");
    scanf("%c",&x);
    if (x>='a'&&x<='z')
    {
        x=x-32;
    }
    printf("%c",x);
}