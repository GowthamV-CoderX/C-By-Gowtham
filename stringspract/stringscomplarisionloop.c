#include<stdio.h>
int main()
{
    int i,value=0;
    char s1[30]="Heyir";
    char s2[30]="Hei";
    for(i=0;s1[i]!='\0' || s2[i]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
        {
            value=1;
            break;
        }
    }
    if(value==1)
    {
        printf("strings are not same");
    }
    else
    {
        printf("strings are same");
    }
}