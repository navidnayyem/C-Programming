#include<stdio.h>
#include<math.h>

void area_of_triangle(){
    double height , width;

    printf("Enter the height: ");
    scanf("%lf", &height);

    printf("Enter the width: ");
    scanf("%lf", &width);

    printf("Area  is %lf", 0.5 * height * width);
}
int main(){
    area_of_triangle();

    return 0;
}

