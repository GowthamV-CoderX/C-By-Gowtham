#include<stdio.h>
int main()
{
    int i,count=0;
    char s1[50];
    printf("enter the name of a string : ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        count++;
    }
    printf("length of a string is %d",count);
}