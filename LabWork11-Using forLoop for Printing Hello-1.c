#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=0;i<16;i++){
        if(i == 5 || i == 10 || i == 15){
            printf("Hello");
        }
        printf("%d \n", i);
    }

    return 0;
}
