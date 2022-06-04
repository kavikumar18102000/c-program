// Creation of listed list in Queue.........

/*  1) For the operation on Enqueue......
->condition for queue empty:
            if(f==null):
                    queue is empty
                    u should make the two pointer pointing to the  same node in the above case,
                    that "f=r=newnode;""

                    if not:
                        else:
                            r->next=node;
                            r=n;

    ->condition for queue full:
            if(node==null):
                    queue is full :"You will get queue full untill  your memeory gets exhausted, because it creates a node
                    until the memory gets exhausted.... "

    2) For the operation on Dequeue....
        ->In dequeue it pop or free's the first node from the queue.

TIP-1: For a queue we need pointer(typically not a pointer variable), one for the fornt(f) and one for the rear(r), where insertion takes place at the rear end
        and the deletion takes place at the front end.

TIP-2: On declaring a variable globally, no need of passing it as a parameter for a function(ex:enqueue()). As it is delared globally.
        If we declare the parameter for a global variable we might get an warning .........
    */

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};

struct queue *f = NULL;
struct queue *r = NULL;

void enqueue(int val)
{
    struct queue *new = (struct queue *)malloc(sizeof(struct queue));
    if (new == NULL)
    {
        printf("Queue is full...\n");
    }
    else
    {
        new->data = val;
        new->next = NULL;
        if (f == NULL)
        {
            f = r = new;
        }
        else
        {
            r->next = new;
            r = new;
        }
    }
}

int dequeue(struct queue *f)
{
    int val = -1;
    struct queue *ptr = f;
    if (f == NULL)
    {
        printf("Queue is empty.....\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

void display(struct queue *f)
{
    printf("Display Linked List Elements...\n");
    while (f != NULL)
    {
        printf("%d\n", f->data);
        f = f->next;
    }
}

int main()
{
    /* We must declare the front and the rear globally.If we declare locally, the pointers will not witness the change, 
    it will be NULL only.....*/
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display(f);
    printf("%d is popped from the queue...\n", dequeue(f));
    return 0;
}