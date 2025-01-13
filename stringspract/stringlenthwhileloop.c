#include<stdio.h>
int main()
{
    int i=0,count=0;
    char s1[45];
    printf("enter string name : ");
    gets(s1);
    while(s1[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length of a string is %d",count);
}