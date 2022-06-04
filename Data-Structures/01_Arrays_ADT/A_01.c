
// Array is an collection of homogeneous(same) data types .....


#include<stdio.h>
#include<stdlib.h>

struct array
{
    int total_size;
    int used_size;
    int *ptr;
};

void create(struct array *a,int t_size,int u_size){
    // (*a).total_size=t_size;         here we are deferencing(*) the array using pointer
    // (*a).used_size=u_size;
    // (*a).ptr=(int*)malloc(t_size*sizeof(int));

    a->total_size=t_size; //we can user arrow operator(->) to deference the pointer
    a->used_size=u_size;
    a->ptr=(int*)malloc(t_size*sizeof(int));
}

void display(struct array *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",a->ptr[i]);
    }
    
}

void insert(struct array *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the %d marks...\n",i+1);
        scanf("%d",&a->ptr[i]);
    }
    
}

int main(){
    struct array marks;
    // create(&marks,10,2);
    // insert(&marks);
    // display(&marks);
    int tot_size,use_size;
    int ch;
     do
    {
    printf("--------------MENU----------------------\n");
    printf("1.Create an Array\n2.Insert into Array\n3.Display\n4.Exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
               printf("Enter the total size of an array...\n");
               scanf("%d",&tot_size);
               printf("Enter the used size of an array...\n");
               scanf("%d",&use_size);
               create(&marks,tot_size,use_size);
               printf("Created array sucfessfully.....\n");
        break;

        case 2:
        insert(&marks);
        break;

        case 3:display(&marks);
        break;

        case 4:exit(0);
        default:printf("Invalid credentials........");

    }
    } while (ch);


return 0;
}