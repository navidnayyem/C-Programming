#include<stdio.h>
#include<math.h>

double area_of_triangle(){
    double height , width;

    printf("Enter the height: ");
    scanf("%lf", &height);

    printf("Enter the width : ");
    scanf("%lf", &width);

    return 0.5 * height * width;
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
    double area = area_of_triangle();
    printf("\nArea of Triangle is %0.2lf", area);
    printName();
    question();

    return 0;
}

