#include <stdio.h>
#include <math.h>

double area(){
    double r,area;
    printf("Enter the radius: \n");
    scanf("%lf", &r);
    area = M_PI * (pow(r,2));
    return area;
}

int main(){

    printf("Lets find the area \n");
    double ans = area();
    printf("\nArea of a circle is %0.2lf\n", ans);

    return 0;
}
