#include<stdio.h>
int fact(int x);
void main(){
    int n,r,t1,t2,t3;
    printf("Enter n & r");
    scanf("%d%d",&n,&r);
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);

    printf("%f",(float)t1/(float)(t2*t3));

}
int fact (int x){
    int i,f=1;
    for (i=x;i>0;i--)
    {
        f=f*i;
    }
    return (f);
}