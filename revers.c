#include<stdio.h>
#include<conio.h>
main()
{
    int l,n,rev=0;
    printf("enter the number :");
    scanf("%d",&n);
    int lastdig =0;
    l =n%10;
    if (l>0)
    {
    while (n!=0)
    {
        lastdig =n%10;
        rev=rev*10;
        rev=rev+lastdig;
        n=n/10;
    }
    printf("the rev of digit is : %d",rev);
    }
    
    else
    {
    while(n!=0)    
    {
        lastdig=n%10;
        rev=rev*10;
        rev=rev+lastdig;
        n=n/10;
    }
    printf("the rev of digi is : 0%d" ,rev);
}
}