
// Checking if a Binary tree is a Binary Search Tree or not...!

// Inorder traversal of a BST gives the ascending sorting of an array.

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

void In_order(node *root)
{
    if (root != NULL)
    {
        In_order(root->left);
        printf("%d ", root->data);
        In_order(root->right);
    }
}

// cheking for a Binary Search Tree

int isBST(node *root)
{
    static node *prev = NULL; //By making the variable static, on recursion the value of the variable does not change on different calls....
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{

    node *n1 = create_node(10); // Creting the root node of the tree

    // Creating the child node of the root node
    node *n2 = create_node(7);
    node *n3 = create_node(11);
    node *n4 = create_node(6);
    node *n5 = create_node(9);

    // Linking the right and left child to the root node
    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    // Finally the tree will look like this....
    //        10
    //       /   \
    //      7    11
    //     / \
    //    6   9

    In_order(n1);
    printf("\n");

    printf("%d", isBST(n1));

    return 0;
}