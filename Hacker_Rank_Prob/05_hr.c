#include<stdio.h>
#include<stdlib.h>

void fizz_buzz(int n){
    for(int i=1;i<=n;i++){
        if(i%3==0&i%5==0){
            printf("fizzzbuzz\n");
        }
        else if(i%5==0){
            printf("buzz\n");
        }
        else if(i%3==0){
            printf("fizz\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}

int main(){
    int n;
printf("enter  the number n....\n");
scanf("%d",&n);
fizz_buzz(n);
return 0;
}