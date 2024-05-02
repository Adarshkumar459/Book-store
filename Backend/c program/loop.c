#include<stdio.h>

int main(){
    int n,num;
    int k=1;
    printf("Eanter a number :->");
    scanf("%d",&n);
    printf("enter other number ");
    scanf("%d",&num);
    for (int i = 1; i <=10; i++)
    {
        printf(" given table%d*%d =%d\n",n,i,n*i);
    }
    printf("opposite table of given number :->%d\n",n);
    int j=10;
    while (j>=1)
    {
        
        printf("given table %d*%d=%d\n",n,j,n*j);
        j--;
    } printf("new table mo of table %d\n",num);
    do 
    {
        printf("table %d*%d=%d\n",num,k,num*k);
        k++;
    } while (k<=10);
    return 0;
}
