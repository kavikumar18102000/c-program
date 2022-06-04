#include<stdio.h>
#include<stdlib.h>

int main(){
int a[3][3]={6,2,5,0,1,3,4,9,8};
int *p;
p=a[0];
printf("%d\n",&a[1]+1);
return 0;
}