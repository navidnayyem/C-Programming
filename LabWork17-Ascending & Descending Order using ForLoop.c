#include <stdio.h>

int main(){
	int a[5] = {2,8,1,11,20};
	int i=0, j=0, n, t;

        for (j=0;j<5;j++){
            for (i=0;i<5;i++){
                if (a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
                }
            }
		}

    printf("The Numbers are    2,8,1,11,20\n\n");

	printf ("Ascending  Order: ");
	for (i=0;i<5;i++){
		printf (" %d", a[i]);
	}

	printf("\n\nDescending Order: ");
	for (i=4;i>-1;i--){
		printf(" %d", a[i]);
	}

    return 0;
}
