# include <stdio.h>

int main() {

    char b;
    double num1,num2;

    printf("Enter an operator (+, -, *): ");
    scanf("%c", &b);

    printf("Enter the 1st number: ");
    scanf("%lf",&num1);
    printf("Enter the 2nd number: ");
    scanf("%lf",&num2);

        if (b == '+'){
            printf("%.1lf + %.1lf = %.1lf",num1, num2,num1+num2);
        }

        else if (b == '-'){
            printf("%.1lf - %.1lf = %.1lf",num1, num2,num1-num2);
        }

        else if (b == '*'){
            printf("%.1lf * %.1lf = %.1lf",num1, num2,num1*num2);
        }
        else{
            printf("This is an ERROR");
        }

    return 0;
}
