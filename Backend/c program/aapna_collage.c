#include<stdio.h>
void printhellow();
void reshmi();
int main(){
    char n;
  printf("enter sorry for i and love for f => ");
  scanf("%c",&n);
  if (n=='i')
  {for (int i = 0; i < 10; i++)
  {
     reshmi();
  }
  
  
  }
  
 else if (n=='f')
 {
    printhellow();
 }
 else 
 printf("you enter worng number");
 

 
  return 0;
}

void printhellow(){
    printf("hellow RESHMI\n");
    printf("i love you so much RESHMI\n");
}
void reshmi(){
    printf(" i am realy sorry yarr\n");
    printhellow();
}
