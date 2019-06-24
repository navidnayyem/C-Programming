#include<stdio.h>
#include<math.h>

double areaOfTriangle(){
    double height , width;

    printf("Enter the height: ");
    scanf("%lf", &height);

    printf("Enter the width: ");
    scanf("%lf", &width);

    return 0.5 * height * width;
}
int main(){
    double area = areaOfTriangle();
    printf("Area of the triangle is %0.2lf", area);

    return 0;
}

