#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,length=0,flag=0;
    char s1[30];
    printf("enter s1 string : \n");
    gets(s1);
    length=strlen(s1);
    for(i=0,j=length-1;i<=j;i++,j--)
    {
        if(s1[i]!=s1[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("it is not a palindrome string ");
    }
    else
    {
        printf("it is a paindrome string");
    }
}