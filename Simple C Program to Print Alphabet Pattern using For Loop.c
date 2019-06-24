#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=i;j<=3;j++)
    {
        printf("\t");
    }
    for(j=0;j<=i;j++)
    {
        printf("\t%c\t",'A'+i);
    }
    printf("\n");
    }
    getch();
}
