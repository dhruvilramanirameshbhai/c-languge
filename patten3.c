#include<stdio.h>
#include<conio.h>
main()
{
    int  i,j;
    for(i=4;i>=1;i--)
    {
        for(j=4;j>i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
