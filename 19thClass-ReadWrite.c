#include <stdio.h>
#include <string.h>

int main(){
    FILE *f1;
    char arr[100];
    f1 = fopen("z.txt","w");
    fputs("Hello,my name is \"Bane\".What is your name ", f1);
    fclose(f1);
    f1 = fopen("z.txt","r");
    fgets(arr,100,f1);
    puts(arr);
    int i = 0, count = 0, count_a = 0, count_e = 0;
    for(i=0;i<strlen(arr);i++){
        if(arr[i] == 'a' || arr[i] == 'e'){
            count++;
            if(arr[i] == 'a'){
                count_a++;
            }
            else{
                count_e++;
            }
        }
    }
    fclose(f1);
    printf("Total found %d times\na found %d times\ne found %d times", count, count_a, count_e);
}
