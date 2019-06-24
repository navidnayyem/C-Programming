#include <stdio.h>

double apple(double a){
    printf("How many Apples do you want to buy: ");
    scanf("%lf", &a);
    printf("The Price of %0.2lf Apples is: $%0.2lf", a,a*1);
    return a*1;
}
double flower(double f){
    printf("\n\nHow many Flowers do you want to buy: ");
    scanf("%lf", &f);
    printf("The Price of %0.2lf Flowers is: $%0.2lf", f,f*0.5);
    return f*0.5;
}
double cookies(double c){
    printf("\n\nHow many Cookies do you want to buy: ");
    scanf("%lf", &c);
    printf("The Price of %0.2lf Cookies is: $%0.2lf", c,c*5);
    return c*5;
}
double cake(double ca){
    printf("\n\nHow many Cakes do you want to buy: ");
    scanf("%lf", &ca);
    printf("The Price of %0.2lf Cakes is: $%0.2lf", ca,ca*3);
    return ca*3;
}

int main(){
    int n = 0;
    double a,f,c,ca;
    printf("\t\t\t\t***SHOPPING CART***\n\n");
    printf("\t\t\t\tPrice of Each Item\n\t\t Apple : $1 || Flower : $0.50 || Cookies : $5 || Cake : $3\n\n");

    double price[4]={apple(a),flower(f),cookies(c),cake(ca)};

    double totalcost = 0;
    for(n=0;n<4;n++){
    totalcost = totalcost + price[n];
    }

    printf("\n\n\t\tTotal Amount of Your Shopping Bill is : $%0.2lf\n", totalcost);

    if (totalcost>10 && totalcost<=20){
        printf("\n\t\t\t>>>YOU GOT 10%% DISCOUNT which is $%0.2lf<<<\n\n\t\tTotal Amount You Have to Pay is: $%0.2lf\n",  totalcost * (0.1), totalcost - totalcost*0.1);
    } else if (totalcost>20 && totalcost<=30){
        printf("\n\t\t\t>>>YOU GOT 15%% DISCOUNT which is $%0.2lf<<<\n\n\t\tTotal Amount You Have to Pay is: $%0.2lf\n", totalcost * (0.15), totalcost - totalcost*0.15);
    } else if (totalcost>30){
        printf("\n\t\t\t>>>YOU GOT 20%% DISCOUNT which is $%0.2lf<<<\n\n\t\tTotal Amount You Have to Pay is: $%0.2lf\n",  totalcost * (0.2), totalcost - totalcost*0.2);
    } else {
        printf("\nYou Have No Discount\n");
    }
    return 0;
}

