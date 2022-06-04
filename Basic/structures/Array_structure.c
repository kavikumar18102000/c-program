#include<stdio.h>
#include<stdlib.h>

typedef struct student{
    char *name;
    int marks;
    float per;

}student;


int main(){
student s[2];



s[0].name="Arya";
s[0].marks=10;
s[0].per=99.9;

s[1].name="kumar";
s[1].marks=100;
s[1].per=99.78;


printf("%s\n",s[0].name);
printf("%d\n",s[0].marks);
printf("%f\n",s[0].per);
printf("----------------------------------------------\n");
printf("%s\n",s[1].name);
printf("%d\n",s[1].marks);
printf("%f\n",s[1].per);
return 0;
}