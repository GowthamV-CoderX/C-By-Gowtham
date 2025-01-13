#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char s1[45];
    printf("enter the name of string : ");
    gets(s1);
    count=strlen(s1);
    printf("length of a string is : %d",count);
}