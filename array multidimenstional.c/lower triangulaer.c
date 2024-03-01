#include<stdio.h>
void main(){
    int a[3][3],i,j,c=0;
    printf("Enter value in matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=3;j>i;j--)
        {
            if(a[i][j]==0)
            {
                c++;
            }

        }
    }
    if (c==3)
    printf("matrix is lower triangle !!");
    else
    printf("not lower triangle !!");

}