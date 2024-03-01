#include<stdio.h>
void main (){
    char name[10][50];
    int i,j,c=0;
    printf("Enter names ");
    for ( i = 0; i < 10; i++)
    {
        gets(name[i]);
    
    for (j=0;name[i][j]!='\0';j++);
    {
        if (j==3)
            c++;
    }
    }
    printf("%d",c);
    
    }