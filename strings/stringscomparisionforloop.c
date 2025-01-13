#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char s1[30],s2[30];
    printf("enter string s1 : \n");
    gets(s1);
    printf("enter string s2 : \n");
    gets(s2);
    for(i=0; s1[i]!='\0' || s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("strings are same");
    }
    else
    {
        printf("strings are not same");
    }
}