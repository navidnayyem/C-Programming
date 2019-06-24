#include <stdio.h>

int main(){
    //what will be printed on the console
    int a = 0;

    while(a<5){
        a++;
        if(a == 3){
            printf("a = 3 \n");
            continue;
        }
        printf("a: %d \n", a);
    }
    printf("While loop over. ");
    return 0;
}
