#include <stdio.h>

int main(){
    int random_number;
    while(1){
    printf("Enter a number: ");
    scanf("%d", &random_number);
    if(random_number==0){//0 should end the game
        printf("The GAME is ENDED", random_number);
        break;
     }
    if(random_number%2==0){
        printf("The NUMBER is EVEN", random_number);
    } else {
        printf("THE NUMBER IS ODD", random_number);
    }

    return 0;
    }
}
