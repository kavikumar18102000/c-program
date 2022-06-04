#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node *create(node *head,int size){
    int val;
    node *temp;
    for(int i=0;i<size;i++){
        if(i==0){
            printf("Enter the head node data\n");
            scanf("%d",&val);
            head->data=val;
            if(size==1){
                head->next=NULL;
                return head;
            }
            temp=head;
        }
        else{
            printf("Enter the %d node value\n",i);
            scanf("%d",&val);
            node *newnode=(node*)malloc(sizeof(node));
            temp->next=newnode;
            newnode->data=val;
            newnode->next=NULL;
            temp=newnode;
        }
    }
    return head;
}

void display(node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}



int main()
{
    node *head=(node*)malloc(sizeof(node));
    head=create(head,3);
    display(head);
    return 0;
}