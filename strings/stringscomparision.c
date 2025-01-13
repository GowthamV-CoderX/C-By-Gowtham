#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char s1[30],s2[30];
    printf("enter string s1 : \n");
    gets(s1);
    printf("enter string s2 : \n");
    gets(s2);
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }
}