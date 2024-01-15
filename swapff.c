#include<stdio.h>
int main()
{
    int a,b;
    int swap(int,int);
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    swap(a,b);
     printf("a=%d\n",a);
     printf("b=%d",b);
}
int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}
