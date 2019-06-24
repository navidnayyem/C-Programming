#include <stdio.h>

//int -> resultant datatype
//add -> name of the function
//x, y -> parameters/arguments
int add(int x, int y){
    return x + y;
}

int main(){

    int a = 10;
    int b = 15;

    int sum = add(a,b);
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}
