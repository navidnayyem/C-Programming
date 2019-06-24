#include <stdio.h>

int main(){
    //what will be printed on the console
    char a;
    printf("Enter a character \n");
    scanf("%c", &a);

    switch(a){
    case 'a'://if (a == 'a')
        printf("You pressed a \n");
        break;
    case 'b'://if (a == 'b')
        printf("You pressed b \n");
        break;
    case 'c'://if (a == 'c')
        printf("You pressed c \n");
        break;
    default://else
        printf("Something else");
    }

    return 0;
}
