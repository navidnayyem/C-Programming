#include <stdio.h>

int main(){

    int a=0;
    //for(a=0;a<10;a++){
      //  printf("%d \n",a);
    //}
    while(a<10){//0 means false
        printf("%d \n",a);
        a++;
        if(a==5){
            break;
            printf("After Break");
        }
    }
    printf("Loop ended with a:%d ",a);
    return 0;
}
