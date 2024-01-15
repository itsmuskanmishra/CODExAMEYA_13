#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
    printf("\n %c is vowel",ch);
    }
    else
    {
        printf("\n %c is not vowel",ch);
    }
}