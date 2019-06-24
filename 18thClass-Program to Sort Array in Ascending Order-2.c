/**
 * C program to sort elements of array in ascending order
 */

#include <stdio.h>

int main(){
    int array[5]={5,2,8,3,1};
    int row=0, column=0, temp;

    for(row=0; row<5; row++)
    {
        /*
         * Place the currently selected element array[i]
         * to its correct place.
         */
        for(column=row+1; column<5; column++)
        {
            /*
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(array[row] > array[column])
            {
                temp     = array[row];
                array[row] = array[column];
                array[column] = temp;
            }
        }
    }

    /* Print the sorted array */
    printf("\nElements of array in sorted ascending order: ");
    for(row=0; row<5; row++)
    {
        printf("%d\t", array[row]);
    }

    return 0;
}
