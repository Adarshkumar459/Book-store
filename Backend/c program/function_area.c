#include<stdio.h>
int sqare();
int rectangle(int a,int b);
int circle(float r);
int main(){
    int n ,a,b,r;
printf("enter area of squre \n");
scanf("%d",&n);
printf("enter area of rectangle \n");
scanf("%d%d",&a,&b);
printf("enter area of circle \n");
scanf("%f",&r);
 sqare();
rectangle( a, b);
int circle(float r);

}
void sqare(){
    int n;
    printf("area of sqare %d\n",n*n);
}
int rectangle( int a, int b){
    printf("area of rectamgle %d\n",a*b);
}
int circle(float r){
    printf("area of circle %f\n",3.14*r*r);
}