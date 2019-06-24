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

int main(){
    printf("Lets do add function");
    int ans = add();
    printf("\n\nAns: %d\n\n",ans);
    return 0;
}
