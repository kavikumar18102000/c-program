// Doubly linked list........

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
    
}node;

void display(node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}

int main()
{
    node *first=(node*)malloc(sizeof(node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));

    first->prev=NULL;
    first->data=10;
    first->next=second;

    second->prev=first;
    second->data=20;
    second->next=third;

    third->prev=second;
    third->data=30;
    third->next=NULL;

    display(first);



    return 0;
}