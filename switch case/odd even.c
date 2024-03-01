#include<stdio.h>
void main(){
    int x,i;
    printf("Enter an integer :");
    scanf("%d",&x);
    printf("1 for even or odd ; \n2 for check less or greator than 500;\n");
    scanf("%d",&i);
    switch (i)
    {
    case 1:if (x%2==0)
            {
                printf("%d is even ",x);
            }
        else{
                printf("%d is odd",x);
            }
        
        break;
    case 2:if (x==500)
            {
                printf("%d is equal to 500",x);
            }
        else if (x>500)
            {
                printf("%d is greator than 500",x);
            }
        else {
                printf("%d is less than 500",x);
            }
        break;
    default:printf("enter correct choice ");
        break;
    }
}