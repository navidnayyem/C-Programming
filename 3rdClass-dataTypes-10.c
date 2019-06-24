#include <stdio.h>
//I am including a library/ header file

int main(void){

    int  sum, minus, multiplication;
    double division;
    double num1;
    double num2;
    //initializing integer variables

    num1 = 6;
    num2 = 12;
    sum = num1 + num2;
    minus = num1 - num2;
    multiplication = num1 * num2;
    division = num1/num2;

    printf("sum = %d \n" ,sum);
    printf("minus = %d \n" ,minus);
    printf("multiplication = %d \n" ,multiplication);
    printf("division = %.1lf \n" ,division);

    return 0;
}
