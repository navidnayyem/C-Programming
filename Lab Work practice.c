#include <stdio.h>

int main(){

    int A, B, C, D, E, F, G, H;

    A = 11 * 3 % 5;
    B = 55 % 10;
    C = 3 * 3 + 5 * 5;
    D = 3 * (3+5) * 5;
    E = (3 * 3+5) - 5;
    F = 5 * 7 - 3;
    G = 5 * (7 - 3);
    H = 15 / 3 + 7;

    printf("The value of A = 11 * 3 %% 5\tis : %d \n ", A);
    printf("The value of B = 55 %% 10\tis : %d \n", B);
    printf("The value of C = 3 * 3 + 5 * 5\tis : %d \n", C);
    printf("The value of D = 3 * (3+5) * 5\tis : %d \n", D);
    printf("The value of E = (3 * 3+5) - 5\tis : %d \n", E);
    printf("The value of F = 5 * 7 - 3\tis : %d \n", F);
    printf("The value of G = 5 * (7 - 3)\tis : %d \n", G);
    printf("The value of H = 15 / 3 + 7\tis : %d \n", H);

    return 0;
}
