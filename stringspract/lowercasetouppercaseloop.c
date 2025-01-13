#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[30];
    printf("enter s1 string : \n");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]=s1[i]-32;
        }
    }
    puts(s1);
}