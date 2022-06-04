// Insertion at the  linked list..........

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next; //->self referencing structure pointer.....
}node;

void display(node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;

    }
}

node *insert_at_beg(node *head,int data){
    node *new=(node*)malloc(sizeof(node));
    new->data=data;
    new->next=head;
    return new;
}

int main()
{
    node *first=(node*)malloc(sizeof(node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));
    node *fourth=(node*)malloc(sizeof(node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    display(first);
    printf("After insertion at beginning.....\n");
    first=insert_at_beg(first,5);
    display(first);
    return 0;
}