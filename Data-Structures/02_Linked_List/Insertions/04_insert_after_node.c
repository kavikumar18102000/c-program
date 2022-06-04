// Insertion of an node after a given node of a linked list..........

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

node *insert_after_node(node *head,node *prevnode,int data){
    node *new=(node*)malloc(sizeof(node));
    new->data=data;
    node *p=head;
    new->next=prevnode->next;
    prevnode->next=new;
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
    first=insert_after_node(first,fourth,5);
    printf("After the insertion....\n");
    display(first);
    return 0;
}