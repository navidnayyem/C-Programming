#include <stdio.h>
#include <string.h>

int main(){
    char str[12] = "Hello";
    char str1[12] = "World";

    printf("Original Value: %s\n", str);
    strcpy(str, str1);//copying str1 to str
    printf("\nAfter copy: %s \n", str);

    printf("\nLength of str is: %d \n", str,strlen(str));

    strcat(str, str1);//adding str1 to end of  str
    printf("\nAfter joining: %s\n", str);
}
