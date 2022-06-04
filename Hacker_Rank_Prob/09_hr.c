#include<stdio.h>
#include<stdlib.h>

void check(int n,int k){
    int m1=0,m2=0,m3=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int and=i&j;
            if(and<k && and>m1){
                m1=and;
            }
            int or=i|j;
            if(or<k && or>m2){
                m2=or;
            }
            int xor=i^j;
            if(xor<k && xor>m3){
                m3=xor;
            }
        }
    }
    printf("%d\n",m1);
    printf("%d\n",m2);
    printf("%d\n",m3);
}


int main(){
int n,k,and=0,or=0,xor=0;
printf("enter the value of n and k\n");
scanf("%d %d",&n,&k);
check(n,k);
return 0;
}