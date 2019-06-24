#include<stdio.h>
#include<conio.h>

int main(){
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age < 16 ){
        printf ("The price of the ticket of children under 16 years is 5 pounds\n");
    }
    else if (age == 16){
        printf("The price of the ticket of children above 16 years or everyone else is 10 pounds\n" );
    }
    else{
        printf("The price of the ticket of children above 16 years or everyone else is 10 pounds\n" );
    }
  return 0;
}
