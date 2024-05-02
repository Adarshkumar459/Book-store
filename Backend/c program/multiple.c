#include<stdio.h>

int main(){
    int n, k;
    printf("enter two number");
    scanf("%d%d",&n,&k);
    for (int i = n; i <=k; i++)
    {
        if (i% 4!=0)
        continue;
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}