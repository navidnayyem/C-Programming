#include<stdio.h>
#include<math.h>

double formula(){
    double a,b,formula;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);

    formula = a + b;

    return formula;
}
double formula01(){
    double c,d,formula01;
    printf("\nEnter the value of c: ");
    scanf("%lf", &c);
    printf("Enter the value of d: ");
    scanf("%lf", &d);

    formula01 = c - d;

    return formula01;
}
double formula02(){
    double e,f,formula02;
    printf("\nEnter the value of e: ");
    scanf("%lf", &e);
    printf("Enter the value of f: ");
    scanf("%lf", &f);

    formula02 = e * f;

    return formula02;
}
double formula03(){
    double g,h,formula03;
    printf("\nEnter the value of g: ");
    scanf("%lf", &g);
    printf("Enter the value of h: ");
    scanf("%lf", &h);

    formula03 = g / h;

    return formula03;
}
int main(){
    double ans = formula();
    printf("\nThe summation of a + b is: %0.2lf\n", ans);

    double answer = formula01();
    printf("\nThe subtraction of c - d is: %0.2lf\n", answer);

    double answer01 = formula02();
    printf("\nThe multiplication of e * f is: %0.2lf\n", answer01);

    double answer02 = formula03();
    printf("\nThe division of g / h is: %0.2lf\n", answer02);

    return 0;
}
