#include<stdio.h>
void main()
{
    int i,j;
    for(int i = 65;i<70;i++) {
        for(int j = 65;j<=i;j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
}
