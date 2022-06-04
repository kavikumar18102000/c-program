
//creation of stack using the structure user defined data type.......

#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int size;
    int top;
    int *arr;
}stack;


int isempty(stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    // stack s;
    // s.size=10;
    // s.top=-1;
    // s.arr=(int*)malloc(s.size*sizeof(int));

    stack *s; // If stack is a pointer then use the arrow operator
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    
// Manual pushing of an element into the stack......
s->arr[0]=10;
s->top++;
s->arr[1]=20;
s->top++;

    if(isempty(s)){
        printf("stack is empty....\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}