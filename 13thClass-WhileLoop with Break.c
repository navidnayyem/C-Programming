#include <stdio.h>

int main(){
    //what will be printed on the console
    int a = 0;

    while(a<5){
        if(a == 3){
            printf("a = 3 \n");
            break;
            printf("After Break");
        }
        a++;
        printf("a: %d \n", a);
    }
    printf("While loop over. ");
    return 0;
}
