
/* Deletion of a node in BST

case 1 : if the node is leaf node.

case 2 : if the node is not a leaf node.
         use inorder pre or inorder post.Means replace the node with the small or greatest node.

case 3 : if the node is a root node.
            step 1: search for the node
            step 2: search for inorder pre or inorder post.
            step 3: keep this doing untill the tree ha no empty nodes.

case 4 : if the node is not present in the BST.Search for the node, if not present return NULL.

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *create(int val)
{
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = val;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

node* inOrderPredecessor(node* root){ //find left subtree right most child....
    root=root->left;
    while(root->right!=NULL){
        root=root->right; // finding the right most leaf node of the root node.... 
    }
    return root;


}

node *deletenode(node *root, int val)
{
    // search for the node to be deleted
    node* ipre;

// using recursion to delete the node......
    if(root==NULL){
        return NULL;
    } 
    if(root->left==NULL && root->right==NULL){ //leaf node
        free(root);
        return NULL;
    }
    if(val<root->data){
        root->left=deletenode(root->left,val);
    }
    else if(val>root->data){
        root->right=deletenode(root->right,val);
    }

// Deletion strategy when the node is found....
    else{
        ipre=inOrderPredecessor(root);
        root->data=ipre->data;
        root->left=deletenode(root->left,ipre->data);
    }

    return root;

}

void In_order(node* root){
    if(root!=NULL){
        In_order(root->left);
        printf("%d ",root->data);
        In_order(root->right);
    }
}

int main()
{
    node *n1 = create(10); // Creating the root node of the tree

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

    In_order(n1);
    node* p=deletenode(n1,2);

    printf("\n");
    // printf("Deleted node is %d | ",p->data);
    In_order(n1);
    return 0;
}