
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height; // --->for checking the balance factor of the tree......

} node;

int get_height(node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

node *create(int val)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->height = 1; // the height of the leaf node is 1. This is leaf node because we are inserting at the end. At lase we will increment the height as the nodes get added...
    return new_node;
}

int get_Balance_factor(node *n)
{
    if (n == NULL)
        return 0;
    return get_Balance_factor(n->left) - get_Balance_factor(n->right);
}

int max(int a, int b)
{
    return a > b ? a : b; // ternary operator.....
}

node *right_rotate(node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(get_height(y->right), get_height(y->left)) + 1;
    x->height = max(get_height(x->right), get_height(x->left)) + 1;

    return x;
}

node *left_rotate(node *x)
{
    node *y = x->right;
    node *T2 = y->left;

    y->left = x;
    x->right = T2;

    y->height = max(get_height(y->right), get_height(y->left)) + 1;
    x->height = max(get_height(x->right), get_height(x->left)) + 1;
}

node *insertion(node *n, int key)
{
    if (n == NULL)
        return (create(key));
    if (key < n->data)
    {
        n->left = insertion(n->left, key);
    }
    else if (key > n->data)
    {
        n->right = insertion(n->right, key);
        return n;
    }

    n->height = 1 + max(get_height(n->left), get_height(n->right));
    int bf = get_Balance_factor(n);

    // Left-Left case
    if (bf > 1 && key < n->left->data)
    {
        return right_rotate(n);
    }

    // Right-Right case
    if (bf < -1 && key > n->right->data)
    {
        return left_rotate(n);
    }

    // Left-Right case
    if (bf > 1 && key > n->left->data)
    {
        n->left = left_rotate(n->left);
        return right_rotate(n);
    }

    // Right-Left case
    if (bf < -1 && key < n->right->data)
    {
        n->right = right_rotate(n->right);
        return left_rotate(n);
    }

    return n;
}

void pre_order(node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

int main()
{
    node* root=NULL;
    root = insertion(root,1);
    root = insertion(root,2);
    root = insertion(root,4);
    root = insertion(root,5);
    root = insertion(root,6);
    root = insertion(root,3);

    pre_order(root);

    return 0;
}