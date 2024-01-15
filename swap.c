#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter any two number");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap number is %d",a,b,temp);
}