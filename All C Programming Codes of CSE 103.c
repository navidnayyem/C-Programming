#include <stdio.h>
// I am including a library called STDIO -> standard input and output

int main(){
    printf("Hello");

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    //Trying to print Hello on console
    /* This is also a comment */
    printf("Hello");

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a=5;//int means integer(real numbers)
    printf("Value of a is %d", a);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int a=5;//int means integer(real numbers)
    char c = 'a';
    double decimalNum = 2.37;

    printf("Value of integer number is %d \n", a);
    printf("Value of char variable is %c \n", c);
    printf("Value of decimal variable is %lf \n", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int num1 = 5;//int means integer(real numbers)
    int num2 = 7;//int means integer(real numbers)
    char c = 'a';
    double decimalNum = 2.37;

    printf("Value of integer number is %d \n", num1+num2);
    printf("Value of char variable is %c \n", c);
    printf("Value of decimal variable is %lf \n", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int num1;//int means integer(real numbers)
    char c = 'a';
    char d = 'b';
    double decimalNum = 2.37;

    printf("Value of integer number is %d \n", num1);
    printf("Value of char variable is %c \n", c);
    printf("Value of decimal variable is %lf \n", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    printf("Hello........");
    printf("Hello........");

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    int num;
    printf("Here you go: %d", num);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    int num = 63;
    int number1 = 123;
    printf("Here you go: %d %d", num, number1);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    double decimalNum = 3.2;

    printf("%lf", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    double decimalNum = 3.267;

    printf("%0.2lf", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    double decimalNum = 3.265;

    printf("%0.4lf", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    double decimalNum = 3.265;

    printf("%0.1lf", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    double decimalNum = 3.265;

    printf("%d", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    double decimalNum = 3.26265;

    printf("%c", decimalNum);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    char letter = 'a';

    printf("Letter you pressed is: %c", letter);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    int sum, minus, multiplication;
    double division;
    double num1;
    double num2;
    //initializing integer variables

    num1 = 6;
    num2 = 12;
    sum = num1 + num2;
    minus = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("Sum = %d \n", sum);
    printf("Minus = %d \n", minus);
    printf("Multiplication = %d \n", multiplication);
    printf("Division = %0.1lf \n", division);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    int sum, minus, multiplication;
    double num1, num2, division;
    //initializing integer variables

    num1 = 6;
    num2 = 12;
    sum = num1 + num2;
    minus = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("Division of %0.2lf and %0.2lf is %0.2lf\n", num1, num2, division);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
// I am including a library / header file

int main(void){
    int sum, minus, multiplication;
    double num1, num2, division;
    //initializing integer variables

    num1 = 6;
    num2 = 0;
    sum = num1 + num2;
    minus = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf("Division of %0.2lf and %0.2lf is %0.2lf\n", num1, num2, division);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    printf("A = 11 * 14 modulus 5 --> %d", 11*(14%5));

    return 0;//this means success
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);//& means address
    printf("I am %d years old", age);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int age = 0;
    double cGPA;

    printf("Enter your age: ");
    scanf("%d", &age);//& means address
    printf("Enter your cGPA: ");
    scanf("%lf", &cGPA);//& means address
    printf("I am %d years old and my cGPA is %0.2lf", age, cGPA);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h> //importing std input output

int main(){
    double r,area;

    printf("Input the radius: ");
    scanf("%lf", &r);
    area = 3.1416 * r * r;
    printf("Area of a circle with radius %0.2lf is %0.2lf", r, area);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h> //importing std input output
#include <math.h>

int main(){
    double r,area;

    printf("Input the radius: ");
    scanf("%lf", &r);
    area = M_PI * r * r;
    printf("Area of a circle with radius %0.2lf is %0.2lf", r, area);

    return 0;
}
------------------------------------------------------------------------
#include<stdio.h>
/*
    This is an addition function
*/

int add(){
    int a = 6;
    int b = 7;
    int sum = a + b;
    return sum;
}

int main(){
    printf("Let's do add function");
    int ans = add();
    printf("\n\nAns: %d\n\n", ans);
    return 0;
}
------------------------------------------------------------------------
#include<stdio.h>
/*
    This is an addition function
*/

int add(){
    int a = 6;
    int b = 7;
    int sum = a + b;
    return sum;
}

/*
    This is a division function
*/

double division(){
    double a = 6.66;
    double b = 3.78;
    double div = a / b; // or use only return a/b
    return div;
}

int main(){
    printf("Let's do division function");
    double ans = division();
    printf("\nDecimal Ans: %0.2lf\n", ans);
    return 0;
}
------------------------------------------------------------------------
#include<stdio.h>
/*
    This is an addition function
*/

int add(){
    int a = 6;
    int b = 7;
    int sum = a + b;
    return sum;
}

/*
    This is a division function
*/

double division(){
    double a,b;
    scanf("%lf %lf", &a, &b);
    double div = a / b; // or use only return a/b
    return div;
}

int main(){
    printf("Let's do division function\n");
    double ans = division();
    printf("\nDecimal Ans: %0.2lf\n", ans);
    return 0;
}
------------------------------------------------------------------------
#include <stdio.h> //importing std input output
#include <math.h>

int main(){
    double r,area;
    printf("Input the radius: ");
    scanf("%lf", &r);

    area = M_PI * (pow(r,2));
    printf("Area of a circle with radius %0.2lf is %0.2lf", r,area);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

double areaOfTriangle(){
    double height,width;

    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);

    return 0.5 * height * width;
}

int main(){
    double area = areaOfTriangle();
    printf("Area of Triangle is %0.2lf", area);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

void Area_of_Triangle(){
    double height,width;

    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);

    printf("Area of Triangle is %0.2lf", 0.5 * height * width);
}

int main(){
    Area_of_Triangle();

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

void Area_of_Triangle(){
    double height,width;

    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);

    printf("Area of Triangle is %0.2lf", 0.5 * height * width);
}

void printNames(){
    printf("\n\nHabib\n");
    printf("Sabib\n");
    printf("Kabib\n");
    printf("Labib\n");
}

/*
    This function ask you your age\
    and calculate your father's age
*/

void question(){
    printf("\n\nHow old are you?\n\n");
    int age;
    scanf("%d", &age);
    printf("I am %d years old\n", age);
    printf("My father is %d years old\n", age+17);
}

int main(){
    Area_of_Triangle();
    printNames();
    question();

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

double Area_of_Triangle(){
    double height,width;

    printf("Enter the height: ");
    scanf("%lf", &height);
    printf("Enter the width: ");
    scanf("%lf", &width);

    return 0.5 * height * width;
}

void printNames(){
    printf("\n\nHabib\n");
    printf("Sabib\n");
    printf("Kabib\n");
    printf("Labib\n");
}

/*
    This function ask you your age\
    and calculate your father's age
*/

void question(){
    printf("\n\nHow old are you?\n\n");
    int age;
    scanf("%d", &age);
    printf("I am %d years old\n", age);
    printf("My father is %d years old\n", age+17);
}

int main(){
    double area = Area_of_Triangle();
    printf("\nArea of Triangle is %0.2lf", area);
    printNames();
    question();

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

//int -> resultant datatype
//add -> name of the function
//x, y -> parameters/arguments
int add(int x, int y){
    return x + y;
}

int main(){

    int a = 10;
    int b = 15;

    int sum = add(a,b);
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

//int -> resultant data type
//add -> name of the function
//x, y -> parameters/arguments
int add(int x, int y){
    return x + y;
}

int main(){

    int x = 10;
    int y = 15;

    int sum = add(x,y);
    printf("Sum of %d and %d is %d", x, y, sum);
}
------------------------------------------------------------------------
#include <stdio.h>

//int -> resultant datatype
//add -> name of the function
//x, y -> parameters/arguments
int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int mul(int x, int y){
    return x * y;
}
double div(double x, double y){
       return x / y;
}

int main(){

    int a = 10;
    int b = 15;

    int sum = add(a,b);
    printf("Sum of %d and %d is %d", a, b, sum);

    int minus = sub(a,b);
    printf("\n\nSubtraction value is %d\n", minus);

    int multiplication = mul(a,b);
    printf("\nMultiplication value is %d\n", multiplication);

    double division = div(a,b);
    printf("\nDivision value is %0.2lf\n", division);

    return 0;

}
------------------------------------------------------------------------
#include <stdio.h>

//Create function to find area of a triangle
//user should input the base and the height

double area_of_triangle(double b, double h){
    return 0.5*b*h;
}

int main(){

    double base,height;
    printf("ENTER the BASE: ");
    scanf("%lf", &base);
    printf("ENTER the HEIGHT: ");
    scanf("%lf", &height);

    double area =  area_of_triangle(base, height);
    printf("Area of triangle is: %0.2lf", area);

}
------------------------------------------------------------------------
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
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){//greater than or equal to
        printf("You are an adult");
    }
    else {
        printf("You are a child");
    }
    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){//greater than or equal to
        printf("You are an adult");
    }
    else if (age >= 10) {
        printf("You are a child");
    }
    else {
        printf("You are a kid");
    }
    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a, b, choice;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Please enter 1 to add \n");
    printf("Please enter 2 to subtract \n");
    printf("Please enter 3 to multiply \n");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Ans: %d", a+b);
    }else if (choice == 2){
        printf("Ans: %d", a-b);
    }else if (choice == 3){
        printf("Ans: %d", a*b);
    }else {
        printf("Read instruction carefully");
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a;//declaring a variable
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a != 5){
        printf("NOT FIVE");
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a = 3;//declaring a variable
    int b = 5;//declaring a variable

    if(a == 5 && b == 3){
        printf("RIGHT");
    } else {
        printf("FALSE");
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int a = 5;//declaring a variable
    int b = 3;//declaring a variable

    if(a == 5 || b == 3){
        printf("RIGHT");
    } else {
        printf("FALSE");
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>


int main (){

    int a = 10;
    int b = 6;
    int c = 200;

    if(a > 5 && b < 10 && c > 100) {
        printf("Hello");
    }
    else{
        printf("Good bye");
    }

        return 0;
}
------------------------------------------------------------------------
#include <stdio.h>


int main (){

    int a = 1;
    int b = 10;
    int c = 200;

    if(a > 5 || b < 10 || c > 100) {
        printf("Hello");
    }
    else{
        printf("Good bye");
    }

        return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=0;i<10;i++) {
        printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=5;i<100;i=i+2) {
        printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=5;i<100;i=i*2) {
        printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=0;i<100;i=i*2) {
        printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int i;//declaring a variable

    for(i=0;;i++) {
        printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){

    int a;
    printf("Enter radius");
    scanf("%d", &a);
    double area = 3.14*a*a;
    printf("Here is your area: %lf", area);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int i;
    //this is a for loop that starts
    //from 0 and ends at 14
    //this loop increments by 1
    for(i=0; i<15; i=i+2){
        printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int main(){
    int steps,i;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);
     //this is a for loop that starts
    //from 0 and ends at 14
    //this loop increments by 1
    for(i=0; i<steps; i++){
            if(i%3 == 0){
                i++;//skipping a step
            }
            printf("%d \n", i);
    }

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

int s(){
    int steps,i;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);
     //this is a for loop that starts
    //from 0 and ends at 14
    //this loop increments by 1
    for(i=0; i<steps; i++){
            if(i%3 == 0){
                i++;//skipping a step
            }
            printf("%d \n", i);
    }

    return s;
}

int main(){
    s();

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

void printingSteps(int steps){
    int i;
    for(i=0; i<steps; i++){
            if(i%3 == 0){
                i++;//skipping a step
            }
            printf("%d \n", i);
    }
}

int main(){
    int steps;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);
    //calling a void function to print steps
    printingSteps(steps);

    return 0;
}
------------------------------------------------------------------------
#include <stdio.h>

void printingSteps(int maxLimit){
    int i;
    //maxLimit is coming from the user as a parameter
    for(i=0; i<=maxLimit; i++){
            if(i%3 == 0){
                i++;//skipping a step
            }
            printf("%d \n", i);
    }
}

int main(){
    int steps;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);
    //calling a void function to print steps
    printingSteps(steps);

    return 0;
}
------------------------------------------------------------------------
