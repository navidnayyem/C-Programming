#include <stdio.h>
#include <conio.h>
#define PI 3.142

int main(){
    float radius, area;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of circle is: %.2f\n", area);

    return 0;//this means success
}

