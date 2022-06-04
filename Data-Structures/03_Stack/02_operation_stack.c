#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int size;
    int top;
    int *arr;
}stack;

stack *create(stack *ptr){
    int s;
    printf("Enter the size of the stack....\n");
    scanf("%d",&s);
    ptr->size=s;
    ptr->top=-1;
    ptr->arr=(int*)malloc(ptr->size*sizeof(int));
    return ptr;
}

int isempty(stack *s){
    if(s->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void display(stack *s){
    while(s->top > -1){
        printf("%d\n",s->arr[s->top]);
        s->top--;
    }
}

void push(stack *s){
    int val;
    if(isfull(s)){
        printf("stack Overflow...\n");
    }
    else{
        for(int i=0;i<=s->size-1;i++){
            s->top++;
            printf("enter the %d element\n",i);
            scanf("%d",&val);
            s->arr[s->top]=val;
        }
    }
}

void pop(stack *s){
    if(isempty(s)){
        printf("Stack Overflow....\n");
    }
    else{
        printf("The topmost element is .....\n");
        printf("%d\n",s->arr[s->top]);
        s->top--;
    }

}

int peek(stack *s,int i){
    if(s->arr[s->top-i+1]<0){
        printf("not valid\n");
    }
    else{
        return s->arr[s->top-i+1];
    }
}

int main()
{
    stack *s;
    s=create(s);
    push(s);
    display(s);
    printf("\n\n");
    for(int j=0;j<=s->top+1;j++){
        printf("%d\n",peek(s,j));
    }
    return 0;
}