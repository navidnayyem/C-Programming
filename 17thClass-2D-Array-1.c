#include  <stdio.h>

int main(){
    int a[2][3] = { {6,5,4},{3,2,1} };
    printf("[0][0] value is = %d\t",a[0][0]);
    printf("[0][1] value is = %d\t",a[0][1]);
    printf("[0][2] value is = %d\n",a[0][2]);

    printf("[1][0] value is = %d\t",a[1][0]);
    printf("[1][1] value is = %d\t",a[1][1]);
    printf("[1][2] value is = %d\n",a[1][2]);

    return 0;
}
