#include <stdio.h>

int main(){
    int steps,i;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);
     //this is a for loop that starts
    //from 0 and ends at 14
    //this loop increments by 1
    for(i=0; i<steps; i++){
            if(i%3 == 0){
                i++;//skipping a step
            }
            printf("%d \n", i);
    }

    return 0;
}



