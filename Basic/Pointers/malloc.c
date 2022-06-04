#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
printf("Enter the value of n\n");
scanf("%d",&n);

int *ptr=(int *)malloc(n*sizeof(int));

if(ptr==NULL){
    printf("Memory if empty.......");
    exit(1);
}
for(int i=0;i<n;i++){
    printf("%d\n",*(ptr+i));
}
return 0;
}