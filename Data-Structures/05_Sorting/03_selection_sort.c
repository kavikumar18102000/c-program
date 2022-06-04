/*  The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order)
    from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

        The subarray which is already sorted. 
        Remaining subarray which is unsorted.

    Has (n-1) passes, and (n-1-i) comparisons

    Worst case O(n^2).
    Best case On -> sorted array..
    Max swaps = n-1.
    Min swaps = 0.

    Selection sort algorithm is not a stable algorithm.
    Selection sort is not an adaptive algorithm.
*/


#include<stdio.h>
#include<stdlib.h>

void selection_sort(int* a,int n){
    int min,temp;
    for(int i=0;i<n-1;i++){ //For number of passes...
        min=i;
        for(int j=i+1;j<n;j++){ //For number of comparisons.....
            if(a[j]<a[min]){
                min=j; //storing the index of min value..to swap the elements.
                
            }  
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        
        
    }
}

void print(int* a,int n){
    printf("Array after sorting is....\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[]={10,3,5,1,8,25,4};
    int n=(sizeof(a))/(sizeof(int));

    selection_sort(a,n);
    print(a,n);
    return 0;
}