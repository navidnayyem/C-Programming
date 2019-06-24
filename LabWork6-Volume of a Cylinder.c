#include <stdio.h>
#include <math.h>

double volume(){
    double r = 7;
    double h = 3;
    double volume = M_PI * (pow(r,2)) * h;
    return volume;
}
int main(){

    printf("Lets find the volume \n");
    double ans = volume();
    printf("\nVolume of a Cylinder with radius 7 and height 3 is %0.2lf\n", ans);

    return 0;
}
