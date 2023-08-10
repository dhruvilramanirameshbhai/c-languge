#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,r,l,b;
    float a;
    printf("enter no which area need(1 for tringle,2 for rectingle,3 for circle) :");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
             printf("enter base of tringle :");
             scanf("%d",&b);
             printf("enter height of tringle :");
             scanf("%d",&l);
             a=1*b/2;
             printf("given tringle area is : %f",a);
             break;
        case 2:
             printf("enter width of tringle :");
             scanf("%d",&b);
             printf("enter lenth of rectingle :");
             scanf("%d",&l);
             a=1*b;
             printf("given rectingle area is : %f",a);
             break;
        case 3:
             printf("enter radius of circle :");
             scanf("%d",&r);
             a=3,14*r*r;
            printf("given circle area is : %f",a);
            break;

        default:
            printf("enter 1 for tringle area,2 for rectingle area,3 for circle area");
            break;
    }
} 