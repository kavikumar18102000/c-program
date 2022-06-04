#include<stdio.h>
#include<stdlib.h>

int max_of_four(a,b,c,d){
    if(a>b&a>c&a>d){
        return a;
    }
    else if(b>a&b>d&b>c){
        return b;
    }
    else if(c>a&c>d&c>b){
        return c;
    }
    else{
        return d;
    }
    return -1;
}

int main(){
 int e, f, g, h;
 printf("enter the values.....\n");
scanf("%d %d %d %d", &e, &f, &g, &h);
int res=max_of_four(e,f,g,h);
printf("%d\n",res);
return 0;
}

