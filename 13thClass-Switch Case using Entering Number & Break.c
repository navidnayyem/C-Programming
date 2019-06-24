#include <stdio.h>

int main(){
    //what will be printed on the console
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);

    switch(a){
    case 1://if (a==1)
        printf("You pressed 1 \n");
        break;
    case 2://if (a==2)
        printf("You pressed 2 \n");
        break;
    case 3://if (a==3)
        printf("You pressed 3 \n");
        break;
    default://else
        printf("Something else");
    }

    return 0;
}
