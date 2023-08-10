#include<stdio.h>
#include<conio.h>
 int main()
{
     int p,r,t;
     float i,ci;
     printf("enter principle ,rate, time :\n");
     scanf("%d %d %d",&p,&r,&t);
     i=p*r*t/100;
     printf("simple interst is : %f\n",i);
     ci=p*pow((1+r/100),t);
     printf("compound interest is : %f",ci);
}

