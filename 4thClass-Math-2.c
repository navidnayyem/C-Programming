
#include <stdio.h>

int main(){
    int age = 0;
    double cGPA;

    printf("Enter your age: ");
    scanf("%d", &age); //& means address

    printf("Enter your cGPA: ");
    scanf("%lf", &cGPA); //& means address

    printf("I am %d years old and my cGPA is %0.2lf", age, cGPA);


    return 0; //this means success
}
