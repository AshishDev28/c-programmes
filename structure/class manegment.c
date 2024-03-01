#include<stdio.h>
struct class
{
    int enroll,mob;
    float fees ;
    char name ;

};
void main (){
    struct class a[10];
    int i,choice;
    printf("Enter details of 10 student ");
    for (i=0;i<10;i++)
    {
        printf("Enter enrollment no.");
        scanf("%d",&a[i].enroll);
        printf("Enter mobile number :");
        scanf("%d",a[i].mob);
        printf("enter fees :");
        scanf("%f",a[i].fees);
        printf("enter name :");
        scanf("%C",a[i].name);
    }
}