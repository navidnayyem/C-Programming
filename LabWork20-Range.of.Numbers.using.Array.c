//6. Write a program to find the range of a set of numbers. Range is the difference between
//the smallest and biggest numbers in the list. [Using Array to implement this program].

#include <stdio.h>
#include <math.h>
int main(){
     int element, indexelement;
     printf("Enter the Number of Elements in the Array: \t");
     scanf("%d",&element);
     int numarray[element];

     printf("Enter the Elements in the Array:\n");
     for (indexelement = 0; indexelement < element; indexelement++){
         scanf("%d", &numarray[indexelement]);
     }
     printf("\n");

     printf ("The elements in the array are:\n");
     for (indexelement = 0; indexelement <  element ; indexelement++){
         printf("%d\t", numarray[indexelement]);
     }
     printf("\n");
     /// finding smallest and largest value///
     int i, largest = numarray[0],smallest=numarray[0];
     for (i=0; i< element; i++){
        if (smallest > numarray[i]){
             smallest = numarray[i];
         }
     }
     for (i=0; i< element; i++){
         if(numarray[i]>largest){
             largest= numarray[i];
         }
     }

     printf("The smallest is %d.\n\n", smallest);
     printf("The largest is %d.\n\n", largest);
     int range = largest - smallest;
     printf("The range is %d.\n\n", range);

     return 0;
 }
