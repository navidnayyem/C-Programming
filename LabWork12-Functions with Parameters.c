#include <stdio.h>
#include <math.h>

void findRemainder(int x){
    printf("Remainder when divided by 5 is %d", x%5);
}
void squareRoot (double x){
    printf("Square root is %0.2lf", pow(x,0.5));
}
void square (double x){
    printf("Square is %0.2lf", pow(x,2));
}
void range (int x){
    if(x<100 && x>10){
        printf("The value of %d is less than 100 or more than 10 ", x);
    }
    else {
        printf("more than 100 or less than 10\n");
    }
}

int main(){
    printf("Please enter 1 to find remainder...\n");
    printf("Please enter 2 to find square root of the number...\n");
    printf("Please enter 3 to find the square of the number...\n");
    printf("Please enter 4 to find range...\n");

    int userChoice, number;
    scanf("%d", &userChoice);

    printf("Enter a number \n");
    scanf("%d", &number);
    if(userChoice == 1){
        //function to find remainder
        findRemainder(number);
    } else if (userChoice == 2){
        squareRoot(number);
    } else if (userChoice == 3){
       square (number);
    } else if (userChoice == 4){
        range (number);
    } else {
        printf("Read Instruction Again");
    }
    return 0;

}
