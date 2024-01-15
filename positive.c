#include<stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n>0)
    {
        printf("n is positive");
    }
else if(n<0)
{
    printf("n is negative");
}
else
{
    printf("n is zero");
}
}