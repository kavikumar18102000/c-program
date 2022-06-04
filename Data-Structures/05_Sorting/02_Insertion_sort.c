/*

Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration. 
Insertion sort works similarly as we sort cards in our hand in a card game. We assume that the first card is already 
sorted then, we select an unsorted card.

Stability is there in insertion sort.

Yes! Insertion sort algorithm is Adaptive.

Time coplexity -> BigO of n square(On2). -> worst case comolexity

Best case complexity is an already sorted array.->O(n).

Total passes = size-1.


1 possible comparisons = 1 swap
2 possible comparisoon = 2 swaps
            '
            '
5 possible comparisons = 5 swaps

*/

#include<stdio.h>
#include<stdlib.h>

void printArray(int* A, int n){
    printf("Array after sorting is...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n){
    int key, j;
    // Loop for passes
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        // Loop for each pass
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}


int main(){
    int a[]={45,32,7,2,56,4};
    int size=(sizeof(a))/(sizeof(int));
    printf("Array before Sorting....\n");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    insertionSort(a,size);
    printArray(a,size);

    return 0;
}