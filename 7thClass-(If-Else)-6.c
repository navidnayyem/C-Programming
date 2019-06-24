#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){//greater than or equal to
        printf("You are an adult");
    }
    else if (age >= 10) {
        printf("You are a child");
    }
    else {
        printf("You are a kid");
    }
    return 0;
}
