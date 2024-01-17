#include<stdio.h>
main()
{
    float celsius,fahrenhit;
    printf("enter the temperature in fahrenit");
    scanf("%f",fahrenhit);
    celsius=(fahrenhit-32)*0.56;
    printf("\n temperature in degree celesius=%f",celsius);
}