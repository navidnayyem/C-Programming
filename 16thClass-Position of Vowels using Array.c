#include <stdio.h>

int main(){
    char letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int vowels[5];// this will save the positions of the vowels
    int n;
    int vowelscounter = 0;
    for(n=0;n<26;n++){
        if (letters[n]=='A' || letters[n]=='E' || letters[n]=='I' || letters[n]=='O' || letters[n]=='U'){
                vowels[vowelscounter]=n;
                vowelscounter++;
        }
    }
     printf("Here are the positions of vowels\n\n");
     for(n=0;n<5;n++){
        printf("Vowels found at %d\n", vowels[n]);
     }
     return 0;
}


