#include <stdio.h>

int main(){
    int c;
    int a[5] = {8,4,6,2,4} ;//initializing an array with 5 elements
    a[1] = -3;
    a[2] = 6;
    for (c=0;c<5;c++){
    printf("0th element %d \n1st element %d \n2nd element %d \n3rd element %d \n4th element %d \n",a[0],a[1],a[2],a[3],a[4]);

    return 0;
    }
}
