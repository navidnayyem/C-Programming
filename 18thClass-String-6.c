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

    //lets compare strings
    char bd[12] = "Bangla \t desh";
    char bd1[12] = "bangladesh";

    if(strcmp(bd, bd1) == 0){
        printf("\nMatch found\n");
    } else {
        printf("\nNO match found\n");
    }
}
