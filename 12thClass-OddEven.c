#include <stdio.h>

int main(){

    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num > 0 && num < 25){
            //value
            //check for odd and even
        if(num % 2 == 0){
        printf("EVEN");
        } else {
        printf("ODD");
        }
    } else {
        printf("Choose between 0 and 25");

    }

    return 0;
}
