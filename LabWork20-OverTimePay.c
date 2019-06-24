//4. Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate
//of Taka 12.00 per hour for every hour worked above 40 hours. Assume that employees
//do not work fractional part of an hour.

#include <stdio.h>
#include <math.h>

int main(){

     int n, hours_of_overtime = 0;
     double total_overtime;
     double totalpayment;

     for (n=1; n<11; n++){
         printf("Employee - %d Overtime Hours:\t", n);
         scanf("%d", &hours_of_overtime);
         total_overtime = hours_of_overtime*12;
         printf("Total Overtime Payment of no.%d employees is %0.2lf Taka\n\n", n,total_overtime);
        }

     return 0;
 }

