#include <stdio.h>

int main(){

    int a;
    int secretNumber = 7;
    while(1){//1 means true
        printf("Guess a number: ");
        scanf("%d", &a);

        if(a == secretNumber){
            printf("YOU WON \n");
            break;
        } else {
            printf("Try again loser! \n");
        }
    }
    return 0;
}
