#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    int r,c;
    int a[5][3] = {12,34,5,3,3,5,53,3,2,6,2,6,2,6,8};

    for (r=0;r<5;r++){
        for (c=0;c<3;c++){
            printf("a[%d][%d] value is = %d\n", r, c, a[r][c]);
            if (c==2){
                printf("\n");
            }
        }
    }
}
