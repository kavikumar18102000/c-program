#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr=(int *)malloc(3*sizeof(int));
for(int i=0;i<3;i++){
    printf("enter the value of element %d ",i+1);
    scanf("%d",ptr+i);
}

ptr=(int *)realloc(ptr,5*sizeof(int));
printf("Memeory has been reallocated.....\n");
for(int i=3;i<5;i++){
    printf("Enter the value of %d element value ",i+1);
    scanf("%d",ptr+i);
}
for(int i=0;i<5;i++){
    printf("%d\n",*(ptr+i));
}
return 0;
}