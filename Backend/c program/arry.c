#include<stdio.h>
int main(){

    int arr[]={10,20,30,40,50};
    int sum=0;
    printf("%d\n",arr[2]);
    arr[4]=500;
    printf("%d\n",arr[4]);
    sum=arr[0]+arr[4];
    printf("%d\n",sum);
    int i=0;
    for ( i = 0; i <5; i++)
    {
       printf("%d\n",arr[i]);
    }
    int j;
    for ( j = 0; j <5 ; j++)
    {
       sum=arr[0]+arr[j];
       printf("%d\n",sum);
    }
    
    
    return 0;
}