// Insertion of a element in between of a linked list using the index value..........
// Here the index value can't have the value to be 0, it should be above 0. To insert the value at the 0, we must be using the "insert at beginnig" method.

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

node *insert_in_bet(node *head,int data,int index){
    node *new=(node*)malloc(sizeof(node));
    node *p=head;
    new->data=data;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    new->next=p->next;
    p->next=new;
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
    printf("After insertion....\n");
    first=insert_in_bet(first,50,2);
    display(first);
    return 0;
}