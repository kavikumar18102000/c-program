/* Use the do while loop to display the LL, because pointer already points to the head, so the while loop condition is false and the
loop iterates... Use of do-while is, it prints the stsatement and then checks the condition.....*/

#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int data;
    struct node *next;
}node;

void traverse(node *head){
    node *ptr=head;
    // printf("%d\n",ptr->data);
    // ptr=ptr->next;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}

int main()
{
    node *first=(node*)malloc(sizeof(node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));

    first->data=10;
    first->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=first;

    traverse(first);

    return 0;
}