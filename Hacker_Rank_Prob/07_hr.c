#include<stdio.h>
#include<stdlib.h>

int main(){
int sum=0,n,r;
printf("enter the number...\n");
scanf("%d",&n);
while(n>0){
r=n%10;
sum=sum+r;
n=n/10;
}
printf("%d\n",sum);
return 0;
}