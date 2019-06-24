#include <stdio.h>
#include <math.h>
int main(){
  char c1[5] = {'A','B','C','D','E'};
  char c2[5] = {'W','X','Y','Z','Q'};
  char a[5];
  int i;

  for (i=0;i<5;i++){
    a[i]  = c1[i];
    c1[i] = c2[i];
    c2[i] = a[i];
  }
  printf("c1\n");
  for (i=0;i<5;i++){
  printf(" %C", c1[i]);
  }
  printf("\nc2\n");
  for (i=0;i<5;i++){
  printf(" %C", c2[i]);
  }
  return 0;
}
