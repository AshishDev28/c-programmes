#include<stdio.h>
void main (){
    int i ,j ,c=1;
    for (i=1;i<5;i++)
    {
        for (j=1;j<5;j++)
        {
            printf("%d  ",c);
            c++;
        }
        printf("\n");
    }
}