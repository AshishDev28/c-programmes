#include<stdio.h>

struct account 
{
    int acc;
    float bal;

};
void main(){
    struct account a[10];
    int i,choice,a1,t;
    float amt;
    printf("Enter details of 10 account ");
    for (i=0;i<10;i++)
    {   printf("Enter acc no:");
        scanf("%d",&a[i].acc);
        printf("Enter bal:");
        scanf("%f",a[i].bal);
    }
    do{
        printf("Enter 1 for bal enq. \nEnter 2 for deposit \nEnter 3 for withdrawl");
        scanf("%d",&choice);
        printf("Enter acc no to operate");
        scanf("%d",&a1);
        for(i=0;i<10;i++)
        {
            if (a[i].acc==a1)
            {
                switch (choice)
                {
                case 1:printf("bal %f",a[i].bal);
                    break;

                case 2:printf("enter amount to be deposits ");
                        scanf("%f",&amt);
                        a[i].bal += amt;
                        printf("amount bal=%f",a[i].bal);
                        break;
                case 3:printf("enter amount to be withdraw");
                        scanf("%f",amt);
                        if (amt<=a[i].bal)
                        {
                            a[i].bal -= amt;
                            printf("amount bal =%f",a[i].bal);
                            
                        }
                        break;
                default:
                        printf("Wrong choice");
                    break;
                }
                break;
            }
        }
        printf("press 1 for more operator ");
        scanf("%d",&t);
    }
    while (t==1);
}