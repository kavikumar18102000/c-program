// 2-Dimensional array-------------or a matrix


#include<stdio.h>
#include<stdlib.h>

int main(){
int a[2][2]; //here the first size is for row and the othe one in for the column...... like 2*2 matrics...
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("Enter the element of a[%d][%d]\n",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\n",a[i][j]);
    }
}

return 0;
}