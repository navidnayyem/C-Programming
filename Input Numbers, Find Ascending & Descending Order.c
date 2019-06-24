#include <stdio.h>

int main(){
	int a[10], i=0, j=0, n, t;
	printf ("Enter the Number of Elements: ");
	scanf ("%d", &n);

	for (i=0;i<n;i++){
		printf("\nEnter the %dth element: ", (i+1));
		scanf("%d", &a[i]);
	}
	for (j=0;j<(n-1);j++){
		for (i=0;i<(n-1);i++){
			if (a[i+1] < a[i]){
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("\nAscending  Order : ");
	for (i=0;i<n;i++)
	{
		printf (" %d", a[i]);
	}

	printf("\nDescending Order : ");
	for (i=n;i>0;i--)
	{
		printf(" %d", a[i-1]);
	}
      /* indicate successful completion */
      return 0;
}
