#include <stdio.h>

int main(){
    //what will be printed on the console
    char op;
    while(1){
    printf("Enter a character \n");
    scanf("%c", &op);

    switch(op){
    case 'a'://if (a == 'a')
        printf("You pressed a \n");
        break;
        break;
    case 'b'://if (a == 'b')
        printf("You pressed b \n");
        break;
    case 'c'://if (a == 'c')
        printf("You pressed c \n");
        break;
    default://else
        printf("Something else \n");
    }
    }
    return 0;
}
