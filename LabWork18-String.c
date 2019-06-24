#include <stdio.h>
#include <string.h>

int main(){
    int length;
    char name[100] = "My name is \"Mohammad Navid Nayyem\". ";
    char destination[20] = "I am from";
    char city_country[20] = "Dhaka,Bangladesh";
    char age[20] = "I am 21 years old";

    strcat(name,destination);
    printf("%s", name);

    strcat(destination,city_country);
    printf(" %s.", city_country);

    strcat(city_country,age);
    printf(" %s.", age);

    length = strlen(name)+strlen(destination)+strlen(city_country)+strlen(age);
    printf("\n\nLength of output is : %d\n", length);

    return 0;
}
