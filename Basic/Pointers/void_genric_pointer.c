#include<stdio.h>
#include<stdlib.h>

int main(){
int a[]={10,20,30,40,50};
void *p;
p=&a;
printf("%d\n",*(int *)p); //here the viod pointer is typecast to of array containing datatype(int)
return 0;
}