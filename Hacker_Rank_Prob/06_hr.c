#include<stdio.h>
#include<stdlib.h>

int main(){
int a,b;
printf("enter the number..\n");
scanf("%d %d",&a,&b);
check(a,b);
return 0;
}

void check(int a,int b){
    for(int i=a;i<=b;i++){
        if(i==0){
            printf("zero\n");
        }
        else if(i==1){
            printf("one\n");
        }
        else if(i==2){
            printf("two\n");
        }
        else if(i==3){
            printf("three\n");
        }
        else if(i==4){
            printf("four\n");
        }
        else if(i==5){
            printf("five\n");
        }
        else if(i==6){
            printf("six\n");
        }
        else if(i==7){
            printf("seven\n");
        }
        else if(i==8){
            printf("eight\n");
        }
        else if(i==9){
            printf("nine\n");
        }
        else if(i>9){
            if(i%2==0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
    }
}