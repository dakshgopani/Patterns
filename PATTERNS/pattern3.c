#include<stdio.h>
void main()
{
    int num;
    printf("Enter number of rows and columns  : ");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++) {
        for(int j = 1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
}
