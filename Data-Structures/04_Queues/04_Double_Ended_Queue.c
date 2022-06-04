/*Creation of Doublel Ended Queue.....(DEqueue)

DEqueue does not follow the FIFO principle as like a normal queue.

Here the inserton and deletion can be taken place in both the front and the rear.

To do the insertion at the front:
            check if front == -1:
                    if true:
                        pop the elements before inserting.
            else:
                decrement the value of front to insert the element.
                don't insert the value less than the value of -1.

To do the insertion at the rear:
            decrement the value of the rear and insert the elelment.

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int f;
    int r;
    int size;
    int *arr;
}DEqueue;

int isempty(DEqueue* q){
    if(q->f==q->r){
        return 1;
    }
    else{
        return 0;
    }
}

int isfull(DEqueue* q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueueR(DEqueue* q,int val){
    if(isfull(q)){
        printf("Queue is overflow......\n");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        // printf("Inserted element successfullu....\n");
    }
}

void enqueueF(DEqueue* q,int val){
    if(q->f==-1){
        printf("Please increment the value of F\n");
    }
    else{
        q->arr[q->f]=val;
        q->f--;
    }
}

int dequeueF(DEqueue* q){
    int a=-1;
    if(isempty(q)){
        printf("Queue is underflow.....\n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}

int dequeuR(DEqueue* q){
    int a=-1;
    if(isempty(q)){
        printf("Queue is underflow....\n");
    }
    else{
        a=q->arr[q->r];
        q->r--;
    }
    return a;
}

void display(DEqueue* q){
    if(isempty(q)){
        printf("Queue is empty.......\n");
    }
    else{
        printf("\n");
        printf("QUEUE Elements are---------------------------------------\n");
        for(int i=0;i<q->size-1;i++){
            printf("queue contains %d at %d index\n",q->arr[i],i);
        }
    }
}


int main(){
    DEqueue* q;
    q->f=q->r=-1;
    q->size=5;
    q->arr=(int*)malloc(q->size*sizeof(int));

    enqueueR(q,10);
    enqueueR(q,20);
    enqueueR(q,30);
    enqueueR(q,40);
    enqueueR(q,50);
    enqueueR(q,60);

    display(q);

    printf("\n%d is popped from the queue...\n",dequeueF(q));
    printf("\n%d is popped from the queue...\n",dequeueF(q));
    printf("\n%d is popped from the queue...\n",dequeueF(q));

    enqueueF(q,40);
    enqueueF(q,60);
    display(q);

    return 0;
}