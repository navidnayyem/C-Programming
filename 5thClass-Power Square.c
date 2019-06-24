#include <stdio.h> //importing std input output
#include <math.h>
int main(){
    double r, area;

    printf("Input the radius: ");
    scanf("%lf", &r);
    area = M_PI * (pow(r,2));
    printf("Area of a circle with radius %0.2lf is %0.2lf", r, area);

    return 0;
}
