
// frequency of of an digit in a string........



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void solve(char *s){
    int freq[10]={0};
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i]<='9'){
            freq[s[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++){
        // if(freq[i]>0){
        //     printf("%d ",freq[i]);
        // }

        printf("%d ",freq[i]);
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[100];
    char *c=&s;
    printf("enter the string.....\n");
    gets(s);
    printf("%s\n",s);
    solve(c);
    return 0;
}
