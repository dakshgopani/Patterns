#include<stdio.h>
void main()
{
    int i,j,k;
    for(int i = 1;i<=5;i++) {
        for(int j = i;j<=4;j++) {
            printf(" ");
        }
        for(int k = 6;k<=i+5;k++) {
            printf("%d ",k-i);
        }
        printf("\n");
    }
}
//done
