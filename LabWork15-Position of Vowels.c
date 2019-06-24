#include <stdio.h>

int main(){
    int n;
    char a_to_z_alphabets[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("***Watch the Vowels Positions from Alphabets***");
    for(n=0;n<26;n++){
        if (n==0 || n==4 || n==8 || n==14 || n==20){
            printf("\n\n%c=%dth Position Vowel\n\n",a_to_z_alphabets[n],n);

        } else {
       printf("%c\n", a_to_z_alphabets[n]);
    }
    }
    return 0;
}

