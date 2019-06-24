#include <stdio.h>

int main(){

    int num1, num2, num3, num4, num5, num6, num7, A, B, C, D, E, F, G, H;
    num1 = 11;
    num2 = 3;
    num3 = 5;
    num4 = 7;
    num5 = 10;
    num6 = 15;
    num7 = 55;

    A = 11 * 3 % 5;
    B = 55 % 10;
    C = 3 * 3 + 5 * 5;
    D = 3 * (3+5) * 5;
    E = (3 * 3+5) - 5;
    F = 5 * 7 - 3;
    G = 5 * (7 - 3);
    H = 15 / 3 + 7;

    A = num1 * num2 % num3;
    B = num7 % num5;
    C = num2 * num2 + num3 * num3;
    D = num2 * (num2+num3) * num3;
    E = (num2 * num2+num3) - num3;
    F = num3 * num4 - num2;
    G = num3 *(num4 - num2);
    H = num6 / num2 + num4;


    printf("The value of A = 11 * 3 % 5 is : %d \n", A);
    printf("The value of B = 55 % 10 is : %d \n", B);
    printf("The value of C = 3 * 3 + 5 * 5 is : %d \n", C);
    printf("The value of D = 3 * (3+5) * 5 is : %d \n", D);
    printf("The value of E = (3 * 3+5) - 5 is : %d \n", E);
    printf("The value of F = 5 * 7 - 3 is : %d \n", F);
    printf("The value of G = 5 * (7 - 3) is : %d \n", G);
    printf("The value of H = 15 / 3 + 7 is : %d \n", H);

    return 0;
}
