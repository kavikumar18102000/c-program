
// Insertion of a node in BST
// NOTE : Checkout for the duplicate values.....

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}node;

node* create(int val){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void insert(node* root,int key){
    node* prev=NULL;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("Duplicate Entry of node...\n");
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }

    node* new=create(key);
    if(key<prev->data){
        prev->left=new;
        printf("node inserted at left of node %d\n",prev->data);
    }
    else{
        prev->right=new;
        printf("node inserted at right of node %d\n",prev->data);
    }
}


int main(){
     node *n1 = create(10); // Creting the root node of the tree

    // Creating the child node of the root node
    node *n2 = create(5);
    node *n3 = create(30);
    node *n4 = create(2);
    node *n5 = create(6);

    // Linking the right and left child to the root node
    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    insert(n1,40);
    printf("%d",n1->right->right->data);
    return 0;
}