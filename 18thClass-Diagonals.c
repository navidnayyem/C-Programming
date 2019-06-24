#include <stdio.h>

int main(){
    int a[5][5];
    a[0][0]=2;
    a[1][1]=2;
    a[2][2]=0;
    a[3][3]=2;
    a[4][4]=2;
    a[0][4]=1;
    a[1][3]=1;
    a[3][1]=1;
    a[4][0]=1;
    int i,j;
    printf("First Diagonal \n");
    for(i=0;i<5;i++){
        printf("%d \n", a[i][i]);
    }
    printf("Second Diagonal\n");
    for(j=0;j<5;j++){
        printf("%d \n", a[j][j]);
    }
    return 0;
}
