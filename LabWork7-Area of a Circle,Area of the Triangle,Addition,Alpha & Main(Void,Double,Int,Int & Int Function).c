#include<stdio.h>
#include<math.h>
//I am including a library / header file
void area_of_circle(){
    double radius;
    printf("Lets find the area of a circle\nEnter the radius: ");
    scanf("%lf", &radius);

    printf("Area of circle is: %lf", M_PI * (pow(radius,2)));
}

double area_of_triangle(){
    double base,height,area;
    printf("\n\nEnter the base: ");
    scanf("%lf", &base);
    printf("Enter the height: ");
    scanf("%lf", &height);

    area = 0.5 * base * height;

    return area;
}

int addition(){
    int a,b,c,d,sum;
    printf("\n\nEnter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of d: ");
    scanf("%d", &d);

    sum = a + b + c + d;
    printf("\nThe sum of 4 numbers is: %d",sum);
    return 0;
}

int alpha(){
    char c;
    c = getchar();
    printf("\n\nWhat grade do you deserve in this course?\n\n");
    scanf("%c", &c);

    printf("\nYou will get %c grade in this course.\n", c);
    return 0;
}

int main(){
    area_of_circle();
    printf("\n\nLets find the area of triangle");
    double ans =  area_of_triangle();
    printf("Area of circle is: %lf\n", ans);
    addition();
    alpha();
    return 0;//this means success
}
