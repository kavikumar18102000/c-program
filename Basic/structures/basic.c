#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char *name;
    int marks;
    float per;

}student;


int main(){
student s1;

student s2={"Kumar",20,85.94}; // we can initialize like this also........

s1.name="Arya";
s1.marks=10;
s1.per=99.9;
printf("%s\n",s1.name);
printf("%d\n",s1.marks);
printf("%f\n",s1.per);
return 0;
}