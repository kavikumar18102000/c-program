
// Iterative search in Binary search treee...........

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

node *Iterative_search(node *root, int key){
    while (root!=NULL)
    {
        if(key==root->data){
            return root;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
    
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



    node *res = Iterative_search(n1,6);
    if (res != NULL)
    {
        printf("Element found : %d \n", res->data);
    }
    else
    {
        printf("Element not found....\n");
    }

    return 0;
}