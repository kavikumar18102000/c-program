#include<stdio.h>
#include<stdlib.h>

struct student{
    char *name;
    int age;
    float per;
};

void add(){
    struct  add
    {
        int m1,m2;
    }s;
    s.m1=10;
    s.m2=20;
    printf("Total %d\n",s.m1+s.m2);
}

int main(){
struct student s1;
s1.name="Arya";
s1.age=21;
s1.per=89.00;

printf("%s\n",s1.name);
printf("%d\n",s1.age);
printf("%f\n",s1.per);

// struct add 0; we can't access the local structure.......

add();

return 0;
}