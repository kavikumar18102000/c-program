#include<stdio.h>
#include<stdlib.h>

typedef struct array{
    int tot_size;
    int use_size;
    int *ptr;
} arr;


void create(arr *a,int t_size,int u_size){
    a->tot_size=t_size;
    a->use_size=u_size;
    a->ptr=(int*)malloc(t_size*sizeof(int));
}

void display(arr *a){
    printf("The array contains........\n");
    for(int i=0;i<a->use_size;i++){
        printf("%d ",a->ptr[i]);
    }
    printf("\n");
}

void insert(arr *a){
    int n;
    for (int i = 0; i < a->use_size; i++)
    {
        printf("Enter the %d num...\n",i+1);
        scanf("%d",&a->ptr[i]);
    }
    
}

void insert_at_index(arr *a){
    int index,ele;
    printf("Enter the index value......\n");
    scanf("%d",&index);
    printf("enter the element to be inserted......\n");
    scanf("%d",&ele);
    if(index>=a->use_size){
        printf("Enter the index value less than the used size............\n");
    }
    else{
        for(int i=a->use_size-1;i>=index;i--){
            a->ptr[i+1]=a->ptr[i];
        }
    a->ptr[index]=ele;
    a->use_size++;
    }
    printf("Entered element successfully.....\n");
}

void delete_at_index(arr *a){
    int index;
    printf("Enter the index value of the element......\n");
    scanf("%d",&index);
    if(index>=a->use_size){
        printf("Index value is greater than the size of an array.......\n");
    }
    else{
        for(int i=index+1;i<a->use_size;i++){
            a->ptr[i-1]=a->ptr[i];
        }
    }
    a->use_size--;
    printf("Deleted element successfully.....\n");
}

void linear_search(arr *a){
    int ele;
    printf("enter the search element.....\n");
    scanf("%d",&ele);
    for(int i=0;i<a->use_size-1;i++){
        if(a->ptr[i]==ele){
            printf("element found at index %d\n",i);
        }
    }
}

int binary_search(arr *a){
    int sele;
    printf("enter the search element....\n");
    scanf("%d",&sele);
    int low, mid, high;
    low = 0;
    high = 4;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(a->ptr[mid] == sele){
            printf("element found at %d\n",mid);
        }
        if(a->ptr[mid]>sele){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    } 
    return -1;
    
}


int main(){

arr num;
int tot_size,use_size,sele;
int ch;
do{
    printf("----------------------MENU BAR------------------------\n");
    printf("1.Create an Array\n2.Insert into Array\n3.Display\n4.Insert at index\n5.Delete_at_index\n6.Linear_search_an_element\n7.Binary_search\n8.Exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
               printf("Enter the total size of an array...\n");
               scanf("%d",&tot_size);
               printf("Enter the used size of an array...\n");
               scanf("%d"
               ,&use_size);
               create(&num,tot_size,use_size);
               printf("Created array sucfessfully.....\n");
        break;

        case 2:
        insert(&num);
        break;

        case 3:display(&num);
        break;

        case 4:insert_at_index(&num);
        break;

        case 5:delete_at_index(&num);
        break;

        case 6:linear_search(&num);
        break;

        case 7:binary_search(&num);
        break;

        case 8:exit(0);
        default:printf("Invalid credentials........");
    }

}while(ch);


return 0;
}