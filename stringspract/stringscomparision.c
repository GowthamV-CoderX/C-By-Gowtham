#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char s1[30]="Hello";
    char s2[30]="World";
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }
    printf("%d",value);
}