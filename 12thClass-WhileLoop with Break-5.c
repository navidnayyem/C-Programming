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
                a=3;
            break;
            printf("After Break");
        }
    }
    printf("Loop Ended");
    return 0;
}
