#include  <stdio.h>

int main(){
    int x,y;
    int a[5][3] = {1,2,5,4,8,25,45,45,78,41,12,121,45,48,9};
    for (x=0;x<=4;x++){
        for (y=0;y<=2;y++){

            printf("[%d][%d] value is = %d\t",x, y, a[x][y]);
            if (y==2){
                printf("\n");
            }
        }
    }
}
