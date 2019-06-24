#include <stdio.h>

int main(){
    int a;
    int secretNumber = 10;
    int endNumber = 7;
    int count = 1;

    while(count<=5){

        printf("Guess a Number: ");
        scanf("%d", &a);

        if(a == secretNumber){
            printf("YOU WON THE GAME...CONGRATULATIONS \n\n");
            break;
        } else if (a == endNumber){
            printf("The Game is Ended! \n\n");
            break;
        } else {
            printf("Please Try Again \n");
            printf("You have %d Chances Remaining \n\n", 5 - count);
    }
    count++;
    }
    return 0;
}





