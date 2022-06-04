#include<stdio.h>
#include<stdlib.h>

int main(){
int arr[10];
int i=0,j=0;
while(i<10){
    printf("enter the array elements %d\n",i+1);
    scanf("%d",&arr[i]);
    i++;
}

while(j<10){
    printf("%d\n",arr[j]); 
    j++;
}
return 0;
}