#include <stdio.h>
#include <math.h>

//Create function to find area of a triangle and circle
//user should input the base,height and radius


double area_of_triangle(double b, double h){
    return 0.5*b*h;
}
double area_of_circle(double r){
    return M_PI * (pow(r,2));
}

int main(){

    double base,height,r;
    printf("ENTER the BASE: ");
    scanf("%lf", &base);
    printf("ENTER the HEIGHT: ");
    scanf("%lf", &height);

    double area =  area_of_triangle(base, height);
    printf("\nArea of triangle is: %0.2lf", area);

    printf("\n\nENTER the RADIUS: ");
    scanf("%lf", &r);

    printf("\nArea of circle is: %0.2lf\n", area_of_circle(r));

}
