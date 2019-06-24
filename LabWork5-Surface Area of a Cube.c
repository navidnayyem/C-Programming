#include <stdio.h>
#include <math.h>

double surfaceArea(){
    double a,surfaceArea;
    printf("Enter the side: \n");
    scanf("%lf", &a);
    surfaceArea = 6 * (pow(a,2));
    return surfaceArea;
}

int main(){

    printf("Lets find the surfaceArea \n");
    double ans = surfaceArea();
    printf("\nSurface Area of a Cube is %0.2lf\n", ans);

    return 0;
}
