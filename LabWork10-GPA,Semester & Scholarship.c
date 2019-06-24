# include <stdio.h>

int main() {
    int sem;
    double gpa;

    printf("Enter your GPA: ");
    scanf("%lf",&gpa);
    printf("Enter your Semester: ");
    scanf("%d",&sem);

        if (gpa > 3.8 && sem > 8){
            printf("\nHonors Scholarship\n");
        }
        else if (gpa > 3.5 && sem > 4){
            printf("\nDean Scholarship\n");
        }
        else if (gpa > 3.5 && sem > 2){
            printf("\nNormal Scholarship\n");
        }
        else if (gpa > 3){
            printf("\nScholarship\n");
        }
        else{
            printf("\nNo scholarship\n");
        }

    return 0;
}
