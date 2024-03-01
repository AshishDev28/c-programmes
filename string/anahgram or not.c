#include<stdio.h>
void main (){
    char a[100],b[100];
    int count[26]={0},add[26]={0},i;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        count[a[i]-'a']++;

    }
    for(i=0;b[i]!='\0';i++)
    {
        add[b[i]-'a']++;
    } 
    if(count[i]==add[i])
    {
        printf("string is anagram!!");
    }
    else 
    printf("not anagram!!");
    

}