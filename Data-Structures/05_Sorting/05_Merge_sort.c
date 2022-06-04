/*
Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves,
and then it merges the two sorted halves.
*/

#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int mid, int low, int high)
{
    int i, j, k, b[100];
    i = low;
    k = low;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int i = 0; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void merge_sort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, mid, low, high);
    }
}

int main()
{
    // int a[]={9,1,4,14,4,15,6};
    int a[] = {10, 40, 50, 4, 2, 1};
    int n = 6;
    merge_sort(a, 0, 5);
    printf("Array after merge sorting is.....\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}