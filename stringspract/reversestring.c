#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    printf("enter string name :");
    gets(s1);
    strrev(s1);
    printf("reverse of string is %s",s1);
}