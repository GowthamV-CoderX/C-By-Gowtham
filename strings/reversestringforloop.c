#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char c;
    char s1[30]="vudumu gowtham";
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        c=s1[i];
        s1[i]=s1[l-i-1];
        s1[l-i-1]=c;
    }
    printf("%s",s1);
}