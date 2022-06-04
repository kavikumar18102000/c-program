#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
printf("Enter the value n\n");
scanf("%d",&n);

int *ptr=(int *)calloc(n,sizeof(int));

if(ptr==NULL){
    printf("memory is empty......");
    exit(1);
}

for(int i=0;i<n;i++){
    printf("Enter the %d value",i+1);
    scanf("%d",ptr+i);
}

for(int i=0;i<n;i++){
    printf("%d\n",*(ptr+i));
}
return 0;
}