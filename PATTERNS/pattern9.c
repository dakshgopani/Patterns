#include<stdio.h>
void main()
{
    int i,j,k;
    for(int i = 65;i<70;i++) {
        for(int j = i;j<70;j++) {
            printf(" ");
        }
        for(int k = 65;k<=i;k++) {
            printf("%c ",k);
        }
        printf("\n");
    }
}
//done

