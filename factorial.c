#include<stdio.h>
int main()
{
    int number,i,fact=1;
    printf("enter any number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    printf("fact=%d",fact);
}