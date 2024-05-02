#include<stdio.h>
int main(){
    int a[10],i;
    printf("enter array element =>");
    for ( i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("the enter array is");
    for ( i = 0; i <=9; i++)
    {
       printf("%d \n",a[i]);
    }
    return 0;
    
}