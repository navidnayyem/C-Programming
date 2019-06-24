#include <stdio.h>

int main(){
    int marks;
    printf("How many marks did you got in your Quiz? \n\n");
    scanf("%d", &marks);

    if(marks > 90){//greater than or equal to
        printf("\nYou got A grade\n");
    }
    else if (marks > 85) {
        printf("\nYou got B+ grade\n");
    }
    else if (marks > 80) {
        printf("\nYou got B grade\n");
    }
    else if (marks > 75) {
        printf("\nYou got C grade\n");
    }
    else if (marks > 60) {
        printf("\nYou got D grade\n");
    }
    else {
        printf("\nYou got F grade\n");
    }
    return 0;
}
