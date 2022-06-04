#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char *name;
    int marks;
    float per;

}student;


int main(){
student s1;
s1.name="Arya";
s1.marks=10;
s1.per=89.5;

student *ptr=&s1;

printf("%d\n",(*ptr).marks); //Dereferencing the pointer......
printf("%s\n",ptr->name);
printf("%f\n",ptr->per);
return 0;
}