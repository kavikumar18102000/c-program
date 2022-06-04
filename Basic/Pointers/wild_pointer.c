#include<stdio.h>
#include<stdlib.h>

int main(){
// int *p;
// *p=100; this is known as an wild pointer,,to overcome this assign correct address or use dynamic memory allocation...

int *p=(int *)malloc(sizeof(int));
*p=50;
printf("%d",*p);
return 0;
}