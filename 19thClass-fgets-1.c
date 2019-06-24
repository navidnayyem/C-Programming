#include <stdio.h>

int main(void){
    char str[15];//no range check
    //gets(str);//this works but there is no end limit to fgets

    fgets(str,3,stdin);//string,size(including last null value),standard input
    printf("This is what you typed: %s",str);
    //printf(str);
    return 0;
}
