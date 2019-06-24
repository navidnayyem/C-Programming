#include <stdio.h>

int main(){
    int a, b, choice;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Please enter 1 to add \n");
    printf("Please enter 2 to subtract \n");
    printf("Please enter 3 to multiply \n");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Ans: %d", a+b);
    }else if (choice == 2){
        printf("Ans: %d", a-b);
    }else if (choice == 3){
        printf("Ans: %d", a*b);
    }else {
        printf("Read instruction carefully");
    }

    return 0;
}
