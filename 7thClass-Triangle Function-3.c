#include <stdio.h>

//Create function to find area of a triangle
//user should input the base and the height

double area_of_triangle(double b, double h){
    return 0.5*b*h;
}

int main(){

    double base,height;
    printf("ENTER the BASE: ");
    scanf("%lf", &base);
    printf("ENTER the HEIGHT: ");
    scanf("%lf", &height);

    double area =  area_of_triangle(base, height);
    printf("Area of triangle is: %0.2lf", area);

}
