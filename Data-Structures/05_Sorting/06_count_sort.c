/* Count sort algorithm.......*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int max(int a[],int n){ //Find the maximum element in the array.
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}


void count_sort(int a[],int n){
    
    int i,j;
    int maximum=max(a,n);
    int *count=(int*)malloc((maximum+1)*sizeof(int));

    // Initialize the count array to 0
    for(i=0;i<maximum+1;i++){
        count[i]=0;
    }

// Increment the index of the corresponding element in the count array.
    for(i=0;i<n;i++){
        count[a[i]]=count[a[i]]+1;
    }

    i=0; //counter for count array
    j=0; //counter for given array 'a'

    while (i<=maximum)
    {
        if(count[i]>0){
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
    


}


int main(){
    int a[]={1,6,9,2,4,5};
    int n=6;
    count_sort(a,n);

    printf("Array after sorting....\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}