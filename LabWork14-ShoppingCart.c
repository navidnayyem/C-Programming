 #include <stdio.h>

int main(){
    int apple,appleprice,cookies,cookiesprice,cake,cakeprice;
    double flower,flowerprice,totalcost;
    printf("\t\t\t\t***SHOPPING CART***\n\n");
    printf("\t\t\t\tPrice of Each Item\n\t\t Apple : $1 || Flower : $0.50 || Cookies : $5 || Cake : $3\n\n");

    printf("How many Apples do you want to buy: ");
    scanf("%d", &apple);
    appleprice = apple * 1;
    printf("The Price of %d Apples is: $%d", apple,appleprice);

    printf("\n\nHow many Flowers do you want to buy: ");
    scanf("%lf", &flower);
    flowerprice = flower * 0.5;
    printf("The Price of %0.2lf Flowers is: $%0.2lf", flower,flowerprice);

    printf("\n\nHow many Cookies do you want to buy: ");
    scanf("%d", &cookies);
    cookiesprice = cookies * 5;
    printf("The Price of %d Cookies is: $%d", cookies,cookiesprice);

    printf("\n\nHow many Cakes do you want to buy: ");
    scanf("%d", &cake);
    cakeprice = cake * 3;
    printf("The Price of %d Cakes is: $%d", cake,cakeprice);

    totalcost = appleprice + flowerprice + cookiesprice + cakeprice;
    printf("\n\n\t\tTotal Amount of Your Shopping Bill is : $%0.2lf\n", totalcost);

    if (totalcost>10 && totalcost<=20){
        printf("\n\t\t\t>>>YOU GOT 10%% DISCOUNT which is $%0.2lf<<<\n\n\t\tTotal Amount You Have to Pay is: $%0.2lf\n",  totalcost * (0.1), totalcost - totalcost*0.1);
    } else if (totalcost>20 && totalcost<=30){
        printf("\n\t\t\t>>>YOU GOT 15%% DISCOUNT which is $%0.2lf<<<\n\n\t\tTotal Amount You Have to Pay is: $%0.2lf\n",totalcost * (0.15), totalcost - totalcost*0.15);
    } else if (totalcost>30){
        printf("\n\t\t\t>>>YOU GOT 20%% DISCOUNT which is $%0.2lf<<<\n\n\t\tTotal Amount You Have to Pay is: $%0.2lf\n",  totalcost * (0.2), totalcost - totalcost*0.2);
    } else {
        printf("\nYou Have No Discount\n");
    }
    return 0;
}

