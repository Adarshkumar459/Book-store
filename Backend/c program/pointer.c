#include<stdio.h>
int main(){
    int a,b;
    int *p=NULL,*q=NULL;
    int sum;
    printf("enter value =>");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    // printf("value of i =%d\n",i);
    // printf("address of i=%p\n",&i);
    // printf("value of p=%p\n",p);
    // printf("value of i by p=%d",*p);
    printf("sum =%d",sum);
    return 0;
}