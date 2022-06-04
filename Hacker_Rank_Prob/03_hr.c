#include <stdio.h>

void update(int *a,int *b,int *c) {
    // Complete this function
    *c=*a;
    *a=*a+*b;
    if(*c<*b){
        *b=(*c-*b)*-1;
    }
    else{
        *b=*c-*b;
    }
    

        
}

int main() {
    int a, b,c;
    int *pa = &a, *pb = &b,*pc=&c;
    
    scanf("%d %d", &a, &b);
    update(pa, pb,pc);
    printf("%d\n%d", a, b);

    return 0;
}