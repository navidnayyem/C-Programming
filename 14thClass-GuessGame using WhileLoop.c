#include<stdio.h>

int main(){
    int counter = 5;
    int guessNumber;
    int secretNumber = 25;
    while(1){
            printf("Guess a Number: ");
            scanf("%d", &guessNumber);
        if(guessNumber == secretNumber){
            printf("You Won!");
        } else {//guess does not match
        counter--;//decreasing counter
        printf("You have %d tries left!", counter);
    }
    if(guessNumber == 7 || counter == 0){
        printf("Game Over");
        break;
    }
}
}
