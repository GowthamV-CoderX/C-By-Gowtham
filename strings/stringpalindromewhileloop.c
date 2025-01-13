#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    printf("enter s1 string : \n");
    gets(s1);
    int length=0;
    length=strlen(s1);
    int i=0,j=length-1;
    int k;
    while(i<=j)
    {
        if(s1[i]!=s1[j])
        {
            k=1;
            break;
        }
        i++;
        j--;
    }
    if(k==1)
    {
        printf("it is not a palindrome string ");
    }
    else
    {
        printf("it is a palindrome string ");
    }
}