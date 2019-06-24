#include <stdio.h>

int main(){
    int rows, columns;
    int cross[5][5]={2,0,0,0,1,0,2,0,1,0,0,0,0,0,0,0,1,0,2,0,1,0,0,0,2};

    for (rows=0;rows<5;rows++){
        for (columns=0;columns<5;columns++){

      if (rows == columns && rows != 2 && columns != 2){
        printf("2\t", cross[rows][columns]);
      }  else if (rows == 2 && columns == 2 ){
        printf("0\t", cross[rows][columns]);
      }    else if(rows + columns == 4) {
        printf("1\t", cross[rows][columns]);
      }   else {
        printf(" \t");
      }

      if (columns == 4){
          printf("\n");
      }

        }
    }
  return 0;
}
