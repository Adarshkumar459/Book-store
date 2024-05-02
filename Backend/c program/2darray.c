#include<stdio.h>
int main(){
    int arr[3][2]={{1,4},{2,4},{3,4}};
    for (int i = 0; i <3 ; i++)
    {
        for ( int j = 0; j <2 ; j++)
    {
       printf("%d\t",arr[i][j]);
    }
    
       printf("\n");
    }
    
}