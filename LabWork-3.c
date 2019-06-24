#include<stdio.h>
#include<conio.h>

int main(){
int height=0;
int width=0;

  printf("Enter the height: ");
  scanf("%d", &height);

  printf("Enter the width: ");
  scanf("%d", &width);

  float area = (height*(float)width)/2;
  printf("Area of a triangle is : %.2lf", area);

  return 0;//this means success
}
