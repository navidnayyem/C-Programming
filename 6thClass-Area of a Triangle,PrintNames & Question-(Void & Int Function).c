#include<stdio.h>
#include<math.h>

void area_of_triangle(){
    double height , width;

    printf("Enter the height: ");
    scanf("%lf", &height);

    printf("Enter the width : ");
    scanf("%lf", &width);

    printf("\nArea  is %0.2lf", 0.5 * height * width);
}

void printName(){
    printf("\n\nHabib \n");
    printf("Sabib \n");
    printf("Kabib \n");
    printf("Labib \n");
}
/*
    This function asks you your age\
    and calculates your father's age
*/
void question(){
    printf("\n\nHow old are you?\n\n");
    int age;
    scanf("%d", &age);
    printf("\nI am %d years old", age);
    printf("\nMy father is %d years old\n\n", age+17);
}

int main(){
    area_of_triangle();
    printName();
    question();

    return 0;
}

