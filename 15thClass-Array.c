#include <stdio.h>

int main(){

    int a[5];//initializing an array with 5 elements
    a[1] = 3;
    a[2] = 6;

    printf("0th element %d \n", a[0]);//garbage
    printf("1st element %d \n", a[1]);//3
    printf("2nd element %d \n", a[2]);//6
    printf("3rd element %d \n", a[3]);//garbage

}
