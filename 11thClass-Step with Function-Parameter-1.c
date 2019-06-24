#include <stdio.h>

void printingSteps(int maxLimit){
    int i;
    //maxLimit is coming from the user as a parameter
    for(i=0; i<=maxLimit; i++){
            if(i%3 == 0){
                i++;//skipping a step
            }
            printf("%d \n", i);
    }
}

int main(){
    int steps;
    printf("Enter the number of steps: ");
    scanf("%d", &steps);
    //calling a void function to print steps
    printingSteps(steps);

    return 0;
}
