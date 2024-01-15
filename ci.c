#include<stdio.h>
#include<math.h>
main()
{
    float p,r,t,ci;
    printf("enter the principal:");
    scanf("%f",&p);
    printf("enter the rate :");
    scanf("%f",&r);
    printf("enter the time:");
    scanf("%f",&t);
    ci=p*pow(1+r/100,t) -p;
    printf("\n the compound interest is %f",ci);
}