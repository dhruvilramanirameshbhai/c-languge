#include<stdio.h>
#include<conio.h>
main ()
{
    int a,b,c,d,e,total;
    float percentage;
    printf("enter english marks");
    scanf("%d",&a);
    printf("enter maths marks");
    scanf("%d",&b);
    printf("enter science marks");
    scanf("%d",&c);
    printf("enter hindi marks");
    scanf("%d",&d);
    printf("enter gujarati marks");
    scanf("%d",&e);
    total=a+b+c+d+e;
    {
        printf("total is : %d\n",total);
    }
    percentage=total/5;
    {
        printf("percentage is :%f",percentage);
    }


}