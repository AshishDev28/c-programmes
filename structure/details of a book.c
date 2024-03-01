#include<stdio.h>
struct book
{
    int b_no;
    float cost;
    char title[100];
};
void main (){
    struct book b;
    printf ("Enter book no. cost title");
    scanf("%d %f",&b.b_no,&b.cost);
    gets(b.title);
    printf("book number =%d",b.b_no);
    printf("cost %f",b.cost);
    puts(b.title);
}