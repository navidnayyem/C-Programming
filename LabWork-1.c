
#include <stdio.h>

int main(){

    int num1, num2;
    printf("Please enter 1st number: ");
    scanf("%d", &num1);

    printf("Please enter 2nd number: ");
    scanf("%d", &num2);

    printf("\n");
    int sum = num1+num2;
    printf("Addition of %d and %d \t\tis %d \n",num1, num2, sum);

    int sub = num1-num2;
    printf("Substraction of %d and %d \tis %d \n",num1, num2, sub);

    int mul = num1*num2;
    printf("Multiplication of %d and %d \tis %d \n",num1, num2, mul);

    float div = num1/(float)num2;
    printf("Division of %d and %d \t\tis %.2lf \n",num1, num2, div);

    return 0; //this means success
}
