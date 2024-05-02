#include<stdio.h>
int main(){
    int i;
    int arr[10],brr[10];
    printf("enter arry element value =>");
    for ( i = 0; i <5 ; i++)
    {
        scanf("%d",&arr[i]);
       
    }
    
    for ( i = 0; i < 5; i++)
    {
      brr[i]=arr[i];
    }for ( i = 0; i <5 ; i++)
    {
      printf(" copy element=> %d\n",brr[i]);
    }
    
    
    
    return 0;
}