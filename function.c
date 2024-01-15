#include<stdio.h>
void main()
{
    int s;
    int add(void);
    s=add();
    printf("s=%d",s);
}
int add()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=a+b;
    return(c);
}