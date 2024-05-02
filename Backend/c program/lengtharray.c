#include<stdio.h>
#include<string.h>
int main(){
    char ch[10];
    char bh[10];
    int i,j;
    printf("enter value  -> ");
    scanf("%s",ch);
    scanf("%s",bh);

 strupr(ch);

    printf("%s",ch);    
    return 0;
    
}