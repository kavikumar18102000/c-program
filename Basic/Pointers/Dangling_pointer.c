#include<stdio.h>
#include<stdlib.h>


int * values(){
    int a=10;
    return &a;
}

int main(){
int *ptr=NULL;
ptr=values();
printf("%d",*ptr);
return 0;
}