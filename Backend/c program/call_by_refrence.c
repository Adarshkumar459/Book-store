#include<stdio.h>
int main(){
    int a,b;
    a=10,b=20;
    sum(&a,&b);
    printf("value of a=%d",a);
    return 0;
}
void sum(int *p,int *q)
{
    int x=*p+*q;
    printf("sum=%d\n",x);
    *p=300;
}