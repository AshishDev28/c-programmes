#include<stdio.h>
void main(){
    int a[3][3],d[3][3],c[3][3],i,j,k;
    printf("Enter values:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for (k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*a[k][j]);
            }
            
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for (k=0;k<3;k++)
            {
                d[i][j]=d[i][j]+(c[i][k]*a[k][j]);
            }
            
        }
    }
    printf("output !!\n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    
}