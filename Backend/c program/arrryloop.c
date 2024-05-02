#include<stdio.h>
int main(){
    int i;
    int squre;
    int arr[10];
    printf("enter arry element value =>");
    for ( i = 0; i <5 ; i++)
    {
        scanf("%d",&arr[i]);
    }for ( i = 0; i <5; i++)
    {
        printf("squre of given element=>");
        squre=arr[i]*arr[i];
       printf("%d\n",squre);
    }
    
    return 0;
}