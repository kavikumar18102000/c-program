
/*Bubble sort is a basic algorithm for arrangeing a string of numbers or other elements in the correct order. 
The method works by examining each set of adjacent elements in the string, from left to right, switching their positions
if they are out of order.

Bubble sort intends to sort an array using (n-1) passes where n is the array's length. And in one pass, 
the largest element of the current unsorted part reaches its final position, and our unsorted part of the array reduces by 1,
and the sorted part increases by 1.

At each pass, we will iterate through the unsorted part of the array and compare every adjacent pair. 
We move ahead if the adjacent pair is sorted; otherwise, we make it sorted by swapping their positions. 
And doing this at every pass ensures that the largest element of the unsorted part of the array reaches its final position 
at the end.

The number of passes depends upon the size of the array.If the size is 6 then, there will be 5-pass to sort the array.
At 5th pass we will get a sorted array...... 

Every pass untill the largest element of array reaches its final position....

NOTE: Bubble sort algorithm is inefficient because of its time complexity........

Bubble sort algorithm is a stable algorithm.
Bubble sort algorithm is not adaptive algorithm by default,but we can make it adaptive.Because it should perform it passes.

In Bubble sort algorithm,
        Lighter elements move from right to left.
        Heavier elements move from left to right.

Time compexity -> O(n2)->Big O n-square ->for unsorted array.
                ->O(n) -> for already sorted array.  
*/


#include<stdio.h>
#include<stdlib.h>

void display(int* a,int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}

void Bubble_sort(int* a,int size){
    int temp;
    for(int i=0;i<size-1;i++){ //For number of passes
        for(int j=0;j<size-1-i;j++){ //For number of comparisons
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }

}

void Bubble_sort_Adaptive(int* a,int size){
     int temp,isadap=0;
    for(int i=0;i<size-1;i++){ //For number of passes
    printf("Working on %d pass...\n",i+1);
    isadap = 1;
        for(int j=0;j<size-1-i;j++){ //For number of comparisons in each pass
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isadap=0;

            }
        }
        if(isadap){
        return;
        }
    }
}

int main(){
    // int a[]={5,11,13,4,2,3,1};
    int a[]={1,2,3,4,5};

    int size=(sizeof(a))/(sizeof(int));

    printf("Array before sorting.....\n");
    display(a,size);
    // Bubble_sort(a,size);
    printf("\nArray after sorting.....\n");
    
    Bubble_sort_Adaptive(a,size);

    display(a,size);

    return 0;
}