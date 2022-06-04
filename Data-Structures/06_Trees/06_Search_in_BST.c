// Searching node in Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *create_node(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// void In_order(node* root){
//     if(root!=NULL){
//         In_order(root->left);
//         printf("%d ",root->data);
//         In_order(root->right);
//     }
// }

node* search(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

int main()
{

    node *n1 = create_node(10); // Creting the root node of the tree

    // Creating the child node of the root node
    node *n2 = create_node(5);
    node *n3 = create_node(30);
    node *n4 = create_node(2);
    node *n5 = create_node(6);

    // Linking the right and left child to the root node
    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

  

    // In_order(n1);

    node *res=search(n1,2);
    if(res!=NULL){
        printf("Element found : %d \n",res->data);
    }
    else{
        printf("Element not found....\n");
    }

    return 0;
}