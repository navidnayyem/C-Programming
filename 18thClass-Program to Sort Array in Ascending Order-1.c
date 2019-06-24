#include <stdio.h>

int main(){
	int array[5] = {5,2,8,3,1};
	int row=0, column=0, n, temp;

        for (column=0;column<5;column++){
            for (row=0;row<5;row++){
                if (array[row] > array[column]){
				temp = array[row];
				array[row] = array[column];
				array[column] = temp;
                }
            }
		}

    printf("The Numbers are    5,2,8,3,1\n\n");

	printf ("Ascending  Order: ");
	for (row=0;row<5;row++){
		printf (" %d", array[row]);
	}

	printf("\n\nDescending Order: ");
	for (row=4;row>-1;row--){
		printf(" %d", array[row]);
	}

    return 0;
}
