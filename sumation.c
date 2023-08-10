#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    int lastdig =0;
    while(n!=0)
    {
        lastdig =n%10;
        sum=sum+lastdig;
        n=n/10;
    }
    printf("the sum of digit is : %d",sum);
}