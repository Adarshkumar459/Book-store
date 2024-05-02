#include<stdio.h>
int main(){
    int arr[10]={10,20,40,60,80};
    int i,max;
    max=arr[0];
    for ( i = 0; i <=5; i++)
    {
       if (arr[i]>max)
       max=arr[i];
       
    }
        printf("largest no %d =",max);
    }