#include<stdio.h>
void main()
{
    int i,j,k;
    for(int i = 1;i<=5;i++) {
        for(int j = i;j<=4;j++) {
            printf(" ");
        }
        for(int k = 70;k<i+70;k++) {
            printf("%c ",k-i);
        }
        printf("\n");
    }
}
//done
//pattern10
