#include<stdio.h>
void main()
{
    int n=6;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            printf(" %d ",j);
        }
        printf("\n");
    }
}
