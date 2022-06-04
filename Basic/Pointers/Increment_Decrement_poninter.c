#include<stdio.h>
#include<stdlib.h>

int main(){
int a=10,*p;
p=&a;
printf("\nValue of p is %d",p);
printf("\nAfter post increment p is %d",*++p);//here it increments the value(address of a) by the size of int(4)
printf("\nAfter pre increment p is %d",++*p);//here it incremnets the value at the address(value of a) of p by 1.
return 0;
}