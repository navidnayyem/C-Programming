#include <stdio.h>

int main(){

    int a[5];//initializing an array with 5 elements
    a[1] = 3;
    a[2] = 6;

    printf("0th element %d \n", a[0]);//garbage
    printf("1st element %d \n", a[1]);//3
    printf("2nd element %d \n", a[2]);//6
    printf("3rd element %d \n\n", a[3]);//garbage

    double b[3]={1.2, 3.2, 4.2};
    printf("0th element %0.2lf \n", b[0]);//1.2
    printf("1st element %0.2lf \n", b[1]);//3.2
    printf("2nd element %0.2lf \n", b[2]);//4.2

}
