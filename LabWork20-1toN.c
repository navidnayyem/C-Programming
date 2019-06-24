//5. Write a program that asks the user for a number n and prints the sum of the numbers 1
//to n.

#include <stdio.h>

int main(){
    int n,x;
    printf("Enter a number:\t");
    scanf("%d", &n);
    int total = 0;
        for (x=n; x>0; x--){
        total = total + x;
        }
    printf("The sum total of %d to 1 is %d.\n", n, total);

    return 0;
}
