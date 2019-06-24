#include <stdio.h>
//I am including a library/ header file

int main(void){

    int  sum, minus, multiplication;
    double num1, num2, division;
    //initializing integer variables

    num1 = 6;
    num2 = 12;
    sum = num1 + num2;
    minus = num1 - num2;
    multiplication = num1 * num2;
    division = num1/num2;

    printf("Division of %0.2lf and %0.2lf is %0.2lf" , num1, num2, division, multiplication);

    return 0;
}
