#include <stdio.h>

//int -> resultant datatype
//add -> name of the function
//x, y -> parameters/arguments
int add(int x, int y){
    return x + y;
}

int main(){

    int x = 10;
    int y = 15;

    int sum = add(x,y);
    printf("Sum of %d and %d is %d", x, y, sum);
}
