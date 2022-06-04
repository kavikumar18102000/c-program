// Pointer(*) is a variable that stores the address of another variable...

#include<stdio.h>

int main(){
int a=0;
int *p;
// int **q; which stores the address of p.
p=&a;
printf("%d\n",&a); //here it prints the  address of a.
printf("%d\n",*(&a)); //here it prints the value at the address of a
printf("%d\n",p); //here it prints the address of a stored in p.
printf("%d\n",*p); //here it prints the value at the address that is stored.
while(a<10){
    printf("%d\n",*p);
    // printf("%s",__FILE__); prints the file name of the program..
    a++;
}
return 0;
}