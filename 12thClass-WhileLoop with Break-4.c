#include <stdio.h>

int main(){

    int a=0;
    //for(a=0;a<10;a++){
      //  printf("%d \n",a);
    //}
    while(a<10){//1 means true
        printf("%d \n",a);
        a++;
        if(a==5){
            break;
        }
    }
    printf("Loop Ended");
    return 0;
}
