#include<stdio.h>
#include<stdlib.h>

int * getting_values(){
    int n=5;
    int *ptr=(int *)malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Memory is empty......");
        exit(0);
    }
    for(int i=0;i<n;i++){
        printf("Enter the value of %d element ",i+1);
        scanf("%d",ptr+i);
    }
    return ptr;

}




int main(){
    int n=0;
int *ptr=getting_values();
for (int i = 0; i < 5; i++)
{
    n+=*(ptr+i);
}

printf("Total is %d\n",n);
free(ptr);
ptr=NULL;

return 0;
}