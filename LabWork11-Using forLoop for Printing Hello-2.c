#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=1;i<16;i++){// stepping from 1 - 15
        if(i == 5 || i == 10 || i == 15){
            printf("Hello\n");
        }
        else {
        printf("%d \n", i);
        }
    }
    return 0;
}
