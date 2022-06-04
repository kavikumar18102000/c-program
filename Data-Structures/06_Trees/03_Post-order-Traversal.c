
// Post-Order traversal (Left subtree -> Right subtree -> Root)

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

void post_order(node* root){
    if(root!=NULL){
        post_order(root->left);
        post_order(root->right);
        printf("%d ",root->data);
    }
}

int main()
{

    node *n1 = create_node(10); // Creting the root node of the tree

    // Creating the child node of the root node
    node *n2 = create_node(20);
    node *n3 = create_node(30);
    node *n4 = create_node(40);
    node *n5 = create_node(50);

    // Linking the right and left child to the root node
    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    // Finally the tree will look like this....
    //        10
    //       /   \
    //      20   30
    //     / \
        // 40  50

    post_order(n1);


    return 0;
}