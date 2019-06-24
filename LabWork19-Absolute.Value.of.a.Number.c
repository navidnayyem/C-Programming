#include <stdio.h>
#include<conio.h>
void main(){
    int number;
    printf("Enter any Number:");
    scanf("%d",&number);
    if(number < 0){
    number = number * -1;
    printf("\nThe absolute value of a number entered via the keyboard is: %d\n", number);
    }else{
        printf("\nEnter a Negative Number!");
    }
    return 0;
}
