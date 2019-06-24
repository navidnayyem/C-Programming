#include<stdio.h>
//use a for loop to solve the following
int main(){
    int counter = 5;
    int guessNumber;
    int secretNumber = 25;

    for(counter = 4; counter>=0;counter--){
            printf("Guess a Number: ");
            scanf("%d", &guessNumber);

        if(guessNumber == secretNumber){
            printf("You Won!");
            break;
        } else {//guess does not match with secret
        printf("\nYou have %d tries left!\n", counter);
        }
    if(guessNumber == 7){
        printf("Game Over");
    }
}
    printf("No more tries left\n");
}

