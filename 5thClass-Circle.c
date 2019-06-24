#include <stdio.h> //importing std input output

int main(){
    double r, area;

    printf("Input the radius: ");
    scanf("%lf", &r);
    area = 3.1416 * r * r;
    printf("Area of a circle with radius %0.2lf is %0.2lf", r, area);

    return 0;
}
