//CSE-104 Assignment

//1. Write a program to find the absolute value of a number entered via the keyboard.
//Ans:

#include <stdio.h>

int main(){
    int num;

    printf("Enter a Number: ");
    scanf("%d",&num);

    if(num < 0){
    	printf("\nThe Absolute Value of %d is: %d\n", num, num * -1);
    } else {
            printf("\nEnter a Negative Number for Finding Absolute Value!\n");
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------
//2. Write a program to reverse a given number.
//   For example, given numbers 123 and reverse numbers 321.
//Ans:

#include<stdio.h>

int main(){
    int array[3]={1,2,3};
    int row=0, column=0, temp;

    for(row=0; row<3; row++){
        for(column=row+1; column<3; column++){
            if(array[row]>array[column]){
                    temp=array[row];
                    array[row]=array[column];
                    array[column]=temp;
            }
        }
    }

    printf("Given number : ");
    for(row=0; row<3; row++){
        printf(" %d\t", array[row]);
    }

    printf("\n\nReverse order: ");
    for(row=2;row>-1;row--){
        printf(" %d\t", array[row]);
    }

    return 0;
}
------------------------------------------------------------------------------------------------------------
//3. Any year is input through the keyboard. Write a program to determine whether the year is a Leap Year or Not.
//Ans:

#include <stdio.h>

int main(){
    int year;

    printf("Enter a Year to check if it is a Leap Year: ");
    scanf("%d", &year);

    if (year%400 == 0){ // Exactly divisible by 400 e.g. 1600, 2000
        printf("\n%d is a Leap Year.\n", year);
    }else if (year%100 == 0){ // Exactly divisible by 100 and not by 400 e.g. 1900, 2100
        printf("\n%d is not a Leap Year.\n", year);
    }else if (year%4 == 0){ // Exactly divisible by 4 and neither by 100 nor 400 e.g. 2016, 2020
        printf("\n%d is a Leap Year.\n", year);
    }else{ // Not divisible by 4 or 100 or 400 e.g. 2017, 2018, 2019
        printf("\n%d is not a Leap Year.\n", year);
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------
//4. Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Taka 12.00 per hour for every hour
//   worked above 40 hours. Assume that employees do not work fractional part of an hour.
//Ans:

#include<stdio.h>

int main(){
    int noe,over_time,total_ovettime_pay,noh;
    for(noe=1; noe<=10; noe++){
            printf("Enter Numbers of Hours Worked by %d Employee: " ,noe);
            scanf("%d", &noh);
            if(noh>=40){
                over_time = noh - 40;
                total_ovettime_pay = over_time * 12;
                printf("\nOvertime Payment of Employee - %d is: %d TAKA\n\n" ,noe, total_ovettime_pay);
            } else if(noh<40){
                printf("\nNo Overtime payment of Employee - %d.\n\n",noe);
            }
    }
}
------------------------------------------------------------------------------------------------------------
//5. Write a program that asks the user for a number n and prints the sum of the numbers 1 to n.
//Ans:

#include <stdio.h>

int main(){
    int n,x;
    printf("Enter a number:\t");
    scanf("%d", &n);
    int total = 0;
        for (x=n;x>0;x--){
        total = total + x;
        }
    printf("The sum total of 1 to %d is %d.\n", n, total);
    return 0;
}
------------------------------------------------------------------------------------------------------------
//6. Write a program to find the range of a set of numbers. Range is the difference between the smallest and biggest numbers in the
//   list. [Using Array to implement this program].
//Ans:

#include<stdio.h>

int main(){
    int arr[100];
    int i,big,small,size;

    printf("Enter the size of array: ");
    scanf("%d" ,&size);
    printf("Enter the numbers of the array:\n");
    for(i=0;i<size;i++){
            scanf("%d" , &arr[i]);
    }
    big = arr[0];
    small = arr[0];
    for(i=1; i<size; i++){
        if(arr[i]>big){
            big = arr[i];
        }
        if(arr[i]<small){
                small = arr[i];
        }
    }
    printf("\nBiggest Number: %d\n", big);
    printf("Smallest Number: %d", small);
    printf("\nDifference between Biggest and Smallest Number is :%d\n", big-small);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//7. Write a program to test whether a string is a palindrome or not.
//Ans:

#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
	    }
	}
    if(flag){
        printf("\n%s is not a palindrome\n", string1);
    }
    else {
        printf("\n%s is a palindrome\n", string1);
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------
//8. Write a program to print out all Armstrong numbers between 1 to 500. If sum of cubes of each digit of the numbers is equal to
//   the numbers itself, then the number is called an Armstrong numbers.
//   For example, 153 = (1*1*1) + (5*5*5) + (3*3*3)
//Ans:

#include<stdio.h>

int main(){
    int num,r,sum,temp;

    printf("All Armstrong numbers between 1 to 500\n\n");
    for(num=1;num<=500;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d\n",num);
    }

    return 0;
}
------------------------------------------------------------------------------------------------------------
//9. Write a program to find Fibonacci series up to n numbers of terms.
//   **The Fibonacci sequence is a series where the next term is the sum of previous two terms.
//   The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8…………..
//Ans:

#include <stdio.h>

int main(){
    int i, n, term1 = 0, term2 = 1, nextTerm;

    printf("Enter the Number of Terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Series: ");

    for (i = 1; i <= n; i++){
        printf("%d\t", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------
//10. A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this numbers.
//    For example, prime factors of 24 are 2,2,2 and 3 whereas prime factors of 35 are 5 and 7.
//Ans:

#include<stdio.h>

int main(){
    int number;
    int prime(int number);
    int primefactor(int number);
    printf("Enter the number whose prime factors are to be calculated:");
    scanf ("%d", &number);
    primefactor(number);
}
//The following function detects a Prime number.
int prime(int num){
    int i, ifprime;

    for (i=2; i<=num-1; i++){
            if (num%i==0){
                ifprime=0;
            } else {
                ifprime=1;
                }
                return (ifprime);
    }
}
//The following function prints the prime factors of a number.
int primefactor(int num){
    int factor,ifprime;

    for (factor=2; factor<=num;){
            prime(factor); //so that the factors are only prime and nothing else.
        if (ifprime){
                if (num%factor==0){ //diving by all the prime numbers less than the number itself.
                    printf("%d ", factor);
                    num=num/factor;
                    continue;
                } else {
                    factor++;//this cannot be made a part of the for loop
                    }
        }
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------
//11. Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers.
//    Call this function from main() and print the result in main().
//Ans:

#include<stdio.h>
#include<math.h>

void sas(int *sum, double *avg, double *stav){
    int a,b,c,d,e,s,y;
    double var;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    y=(a*a)+(b*b)+(c*c)+(d*d)+(e*e);
    *sum=s;
    *avg=s/5;
    var=(y/5)-((s/5)*(s/5));
    *stav=pow(var,0.5);
}
int main(){
    int sum;
    double avg, stav;
    printf("Enter 5 integers : ");
    sas(&sum,&avg,&stav);
    printf("Sum = %d\nAverage = %f\nStandard Deviation = %0.2lf",sum,avg,stav);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//12. Write a function that receives marks received by students in 3 courses and returns the average and percentage of these marks.
//    Call this function from main() and print the result in main().
//Ans:

#include <stdio.h>

void calc(int i, int j, int k, float total, float *ave, float *perce){
    total = i + j + k;
    *ave = (i + j + k) / 3.0;
    *perce = (total / 300.0) * 100.0;
}

int main(){
    int a, b, c;
    float t,av, perc;
    printf("Enter the Mark of Course 1: ");
    scanf("%d", &a);
    printf("Enter the Mark of Course 2: ");
    scanf("%d", &b);
    printf("Enter the Mark of Course 3: ");
    scanf("%d", &c);
    calc(a, b, c, t, &av, &perc);
    printf("\nThe Average Marks of 3 Courses is %0.2f.\n", av);
    printf("The Percentage    of 3 Courses is %0.2f%%.\n", perc);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//13.	   Write a function that swaps two numbers.
//Ans:

#include <stdio.h>

int main(){
    double num1, num2, temp;
    printf("ENTER 1ST NUMBER & 2ND NUMBER:\t ");
    scanf("%lf %lf", &num1, &num2);
    printf("\nNUMBER 01 = %0.2lf\nNUMBER 02 = %0.2lf\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nSwapping Numbers\n\n");
    printf("NUMBER 01 = %0.2lf\nNUMBER 02 = %0.2lf\n", num1, num2);
    return 0;
}
------------------------------------------------------------------------------------------------------------
//14. Write a function that finds factorial of a number.
//Ans:

#include <stdio.h>
#include <math.h>

int main(){
    int num, factorial=1;

    printf("Enter the number whose factorial you want to find:\t");
    scanf("%d", &num);
    int num1 = num;
    while (num1 > 0){
        factorial = factorial * num1 ;
        num1--;
     }

    printf("\nThe factorial of %d is %d.\n", num, factorial);
    return 0;
 }
------------------------------------------------------------------------------------------------------------
//15.	Write a function that find largest element in a list.
//Ans:

#include<stdio.h>

int main(){
    int arr[100];
    int i,large,size;

    printf("Enter the size of array: ");
    scanf("%d" ,&size);
    printf("Enter the numbers of the array:\n");
    for(i=0;i<size;i++){
            scanf("%d" , &arr[i]);
    }
    large = arr[0];

    for(i=1; i<size; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    printf("\nThe largest element in the list is %d\n", large);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//16. Write a C program to find sum of all array elements.
//Ans:

#include<stdio.h>

int main(){
    int arr[100];
    int i, n, sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("\nSum of all elements of array is: %d", sum);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//17. Write a C program to find maximum and minimum element in an array.
//Ans:

#include<stdio.h>

int main(){
    int arr[100];
    int i,big,small,size;

    printf("Enter the size of array: ");
    scanf("%d" ,&size);
    printf("Enter the numbers of the array:\n");
    for(i=0;i<size;i++){
            scanf("%d" , &arr[i]);
    }
    big = arr[0];
    small = arr[0];
    for(i=1; i<size; i++){
        if(arr[i]>big){
            big = arr[i];
        }
        if(arr[i]<small){
                small = arr[i];
        }
    }
    printf("\nMaximum Element: %d\n", big);
    printf("Minimum Element: %d\n", small);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//18.	Write a C program to find second largest element in an array.
//Ans:

#include <stdio.h>
#include <limits.h> //For INT_MIN
#define MAX_SIZE 1000

int main(){
    int arr[MAX_SIZE], N, i;
    int max1, max2;

    /* Input size of the array */
    printf("Enter size of the array (1-1000): ");
    scanf("%d", &N);

    /* Input array elements */
    printf("Enter elements in the array: ");

    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    max1 = max2 = INT_MIN;
    //Check for first largest and second largest till N

    for(i=0; i<N; i++){
        if(arr[i] > max1){
            //If current element of the array is first largest then make current max as second max
            //and then max as current array element
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2 && arr[i] < max1){
            //If current array element is less than first largest but is greater than second largest then
           // make it second largest
            max2 = arr[i];
        }
    }

    printf("\nSecond Largest Element = %d\n", max2);

    return 0;
}
------------------------------------------------------------------------------------------------------------
//19. Write a C program to insert and delete of an element from an array at specified position.
//    For example, Input elements: 10	20	30	40	50
//    Inserting 25 at position 3 , Elements of array after inserting: 10, 20, 25, 30, 40,50
//    Input position to delete: 2 , Elements of array after deleting: 10,25,30,40,50
//Ans:

#include <stdio.h>

int main(){
    int array[100], position, c, n, value, size, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n\n", n);
    for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

    printf("\nEnter the position where you wish to insert an element\n");
    scanf("%d", &position);
    printf("Enter the value to insert\n");
    scanf("%d,", &value);
    for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
    array[position-1] = value;

    printf("\nElements of array after inserting: ");
        for (c = 0; c <= n; c++)
      printf("%d,\t", array[c]);

    printf("\n\nEnter the location where you wish to delete element\n");
    scanf("%d,", &position);

    if ( position >= n+1 )
      printf("Deletion not possible.\n");
    else {
      for ( c = position - 1 ; c < n ; c++ )
         array[c] = array[c+1];

      printf("Elements of array after deleting: ");

      for( c = 0 ; c < n ; c++ )
         printf("%d,\t", array[c]);
   }
}
------------------------------------------------------------------------------------------------------------
//20. Write a script that will ask a user to enter his name, age and his salary. If his age is over 30 and salary over 1 million,
//    display “You are successful”. Otherwise display “Good luck with life ahead.”
//Ans:

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int age;
    double salary;

    printf("Enter your Name: ");
    scanf(" %s", name);
    gets(name);//Function to read string from user.[gets() is a predefined function gets() in C
                       //language to read and display string respectively].
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your Salary: ");
    scanf("%lf",&salary);

    if (age > 30 && salary > 1000000){
        printf("\nYou are successful\n");
    } else {
       printf("\nGood luck with life ahead\n");
    }

    return 0;
}
------------------------------------------------------------------------------------------------------------
