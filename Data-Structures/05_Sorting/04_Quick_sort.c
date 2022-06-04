/*
QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked
pivot. There are many different versions of quickSort that pick pivot in different ways.

                ->Always pick last element as pivot (implemented below)
                ->Always pick first element as pivot.
                ->Pick a random element as pivot.
                ->Pick median as pivot.


Partitioning of an array:
    1) pivot=low -> 0
    2) i=pivot+1
    3) j=high -> (n-1)
    4) i++ until element > pivot is found
    5) j-- until element <= pivot is found
    6) inter-change a[i] and a[j] and repeat 4 and 5 until j <= i
    7) swap pivot and a[j]

(n-1) times partitioning is done.

worst case -> already sorted array -> Time complexity = O(n^2).

Best case analysis -> O(nlogn)

Qucik sort is an insort algorithm.

*/



#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    //int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int A[] = {9, 4, 4, 8, 7, 5, 6};
    // 3, 5, 2, 13, 12, 3, 2, 13, 45
    // 3, 2, 2, 13i, 12, 3j, 5, 13, 45
    // 3, 2, 2, 3j, 12i, 13, 5, 13, 45 --> first call to partition returns 3
    int n = 9;
    n =7;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}
