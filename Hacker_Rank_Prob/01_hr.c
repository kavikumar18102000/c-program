#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b;
float c,d;
printf("enter the number.....");
scanf("%d %d",&a,&b);
printf("enter the float.....");
scanf("%f %f",&c,&d);
int re=(b-a)*-1;
float res=(d-c)*-1.0;
printf("%d %d\n",a+b,re);
printf("%.1f %.1f\n",c+d,res);
return 0;
}