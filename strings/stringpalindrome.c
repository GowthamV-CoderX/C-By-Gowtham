#include<stdio.h>
#include<string.h>
int main()
{
    char temp[30];
    char s1[30];
    printf("enter s1 string : \n");;
    gets(s1);
    strcpy(temp,s1);
    strrev(s1);
    if(strcmp(temp,s1)==0)
    {
        printf("it is a palindrome string");
    }
    else
    {
        printf("it is not a palindrome string");
    }
}