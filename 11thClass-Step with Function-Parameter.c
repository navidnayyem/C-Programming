#include <stdio.h>

void printingSteps(int steps){
    int i;
    for(i=0; i<steps; i++){
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
