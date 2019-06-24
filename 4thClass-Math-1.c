
#include <stdio.h>

int main(){
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age); //& means address

    printf("I am %d years old", age);


    return 0; //this means success
}
