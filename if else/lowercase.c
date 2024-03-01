#include<stdio.h>
void main(){
    char x;
    printf("Enter a char");
    scanf("%c",&x);
    if (x>='A'&&x<='Z')
    {
        x=x+32;
    }
    printf("%c",x);
}