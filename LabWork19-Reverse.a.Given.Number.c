//#include <stdio.h>
//
//int main(){
//	int array[5] = {1,2,3};
//	int row=0, column=0, n, temp;
//
//        for (column=0;column<5;column++){
//            for (row=0;row<5;row++){
//                if (array[row] > array[column]){
//				temp = array[row];
//				array[row] = array[column];
//				array[column] = temp;
//                }
//            }
//		}
//
//    printf("Given Numbers are    1 2 3\n\n");
//
//	printf("Reverse Order:      ");
//	for (row=4;row>1;row--){
//		printf(" %d", array[row]);
//	}
//
//    return 0;
//}
#include <stdio.h>

int main(){
    int arr[10];
    int n, i, j, temp;

    printf(" Sort elements of array in Descending Order\n");
    printf("----------------------------------------------\n");

    printf("Input the size of array : ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n",n);
        for(i=0;i<n;i++){
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nElements of array is sorted in descending order: ");
    for(i=0; i<n; i++){
        printf("%d  ", arr[i]);
    }
}
