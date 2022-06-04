// Pointer arithmeric in c....

#include<stdio.h>
#include<stdlib.h>

int main(){
int a=10,*p,*r;
p=&a;
r=p+1;
printf("value of p is %d\n ",p);
printf("size of int is %d\n",sizeof(int));
printf("Value of p is %d\n",r);
return 0;
}