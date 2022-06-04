#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;

node* create_node(int val){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}


int main(){
    
    node* n1=create_node(10); //Creting the root node of the tree

// Creating the child node of the root node
    node* n2=create_node(20); 
    node* n3=create_node(30);

// Assigning the right and left child to the root node
    n1->left=n2;
    n1->right=n3;


    return 0;
}