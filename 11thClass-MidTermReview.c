#include <stdio.h>

int main(){

    int a;
    printf("Enter radius");
    scanf("%d", &a);
    double area = 3.14*a*a;
    printf("Here is your area: %lf", area);

    return 0;
}
