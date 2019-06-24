#include <stdio.h>

void findAverage(double x, double y){
    printf("The average of %0.2lf & %0.2lf is %0.2lf", x,y,(x+y)*0.5);
    return (x+y)*0.5;
}
int main(){

    double num1,num2;
    printf("Enter 1st number: ");
    scanf("%lf", &num1);
    printf("Enter 2nd number: ");
    scanf("%lf", &num2);

    findAverage(num1,num2);

    return 0;
    }
