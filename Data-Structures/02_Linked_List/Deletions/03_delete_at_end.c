// Deletion of a node at the end of a linked list...........

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void display(node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}

node *delete_at_end(node  *head){
    node *ptr=head;
    node *q=head->next;
    int i=0;
    while(q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);
    return head;
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
    printf("After deletion linked list is...\n");
    first=delete_at_end(first);
    display(first);

    return 0;
}