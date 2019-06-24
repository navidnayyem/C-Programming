#include <stdio.h>
#include <string.h>

int main(){
    char str[12] = "Hello";
    char str1[12] = "World";

    printf("Original Value: %s", str);
    strcpy(str, str1);//copying str1 to str
    printf("\n\nAfter copy: %s\n", str);

}
