#include <stdio.h>
#include <math.h>

int main (){
    int stop;
    int term, Term, course, Course, credit;
    double GPA=0,cGPA=0, f=0, g=0,h=0,k=0, gradepoint;
    printf("Enter the number of terms(semester):\t");
    scanf ("%d", &Term);
    printf("\n");
    for (term=1; term<=Term;term++){
      printf("\n");
      printf("A+ = 4.00\t A = 4.00\t A- = 3.80\t B+ = 3.30\t B = 3.00\t B = 2.80\t C+ = 2.50\t C = 2.20\t D = 1.50\t F,I,W,AW=0\n");
      printf("\n\tFor Term %d.\n", term);
      printf("\nEnter the number of courses in term %d:\t", term);
      scanf("%d", &Course);
      for (course=1;course<=Course;course++){
        printf("\nEnter the credits of course %d:\t", course);
        scanf ("%d", &credit);
        printf("Enter the gradepoint received in course %d:\t",course);
        scanf("%lf", &gradepoint);
        g = g + credit*gradepoint;
        f = f + credit;
      }
      h = g - h;
      k = f - k;
      printf("\nYOUR Term G.P.A IS %0.3lf\n\n", h/k);
    }
    printf("\n");

      printf("\t\tYOUR C.G.P.A IS %0.3lf", g/f);
    return 0;
}
