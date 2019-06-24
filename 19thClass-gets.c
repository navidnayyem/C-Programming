#include <stdio.h>

int main(void){
    char str[5];//no range check
    gets(str);//this works but there is no end limit to fgets
    printf("This is what you typed: %s",str);
    //printf(str);
    return 0;
}
