#include<stdio.h>
#include<stdlib.h>

typedef struct array{
    int r;
    int c;
    int *ptr;
}arr;

void create(arr *a){
    printf("enter the row size of an array...\n");
    scanf("%d",&a->r);
    printf("enter the column size of an array....\n");
    scanf("%d",&a->c);
    a->ptr=(int*)malloc((a->r*a->c)*sizeof(int));
}

void insert(arr *a){
    for(int i=0;i<a->r*a->c;i++){
            a->ptr[i]=i+1;
        
    }
}

void display(arr *a){
    for(int i=0;i<a->r;i++){
        for(int j=0;j<a->c;j++){
            printf("%d",a->ptr[i*a->c+j]);
            printf("\n");
        }
    }
}


int main(){
arr m1;
create(&m1);
insert(&m1);
display(&m1);
return 0;
}