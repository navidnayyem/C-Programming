#include <stdio.h>

//int -> resultant datatype
//add -> name of the function
//x, y -> parameters/arguments
int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int mul(int x, int y){
    return x * y;
}
double div(double x, double y){
       return x / y;
}

int main(){

    int a = 10;
    int b = 15;

    int sum = add(a,b);
    printf("Sum of %d and %d is %d", a, b, sum);

    int minus = sub(a,b);
    printf("\n\nSubtraction value is %d\n", minus);

    int multiplication = mul(a,b);
    printf("\nMultiplication value is %d\n", multiplication);

    double division = div(a,b);
    printf("\nDivision value is %0.2lf\n", division);

    return 0;

}
