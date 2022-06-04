// Pointer to pointer or nested pointer....

#include<stdio.h>

int main(){
int a=10;
int *p,**q,***r;
p=&a;
q=&p;
r=&q;
printf("-----DOUBLE POINTER---------\n");
printf("Address of p %d\n",&p); 
printf("Value at address of p %d\n",*p); 
printf("Value of q %d\n",q); 
printf("Value at the address of q %d\n",**q); 
printf("---------TRIPLE POINTER---------\n");
printf("Address of q %d\n",&q); 
printf("Value at address of q %d\n",**q); 
printf("Value of r %d\n",r); 
printf("Value at the address of r %d\n",***r); 
}