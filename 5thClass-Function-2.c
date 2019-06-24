#include <stdio.h>

/*
    This is an addition function
*/
int add(){
    int a = 6;
    int b = 7;
    int sum = a + b;
    return sum;
}
/*
    This is a division function
*/
double division(){
    double a,b;
    scanf("%lf %lf", &a, &b);
    double div = a / b;// or use only return a / b;
    return div;
}
int main(){
    //printf("Lets do add function");
    //int ans = add();
    //printf("Ans: %d",ans);
    printf("Lets do division function\n");
    double ans = division();
    printf("\nDecimal Ans: %0.2lf\n",ans);
    return 0;
}
