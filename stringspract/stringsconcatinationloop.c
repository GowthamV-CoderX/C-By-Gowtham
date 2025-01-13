#include<stdio.h>
#include<string.h>
int main()
{
    int i,length1=0,length2=0;
    char s1[30];
    printf("enter a name for string s1 : ");
    gets(s1);
    char s2[45];
    printf("enter a name for string s2 : ");
    gets(s2);
    length1=strlen(s1);
    length2=strlen(s2);
    printf(" \n %d is length of string s1 %d is length of string s2 \n",length1,length2);
    for(i=0;i<=length2;i++)
    {
        s1[length1 + i] = s2[i];
    }
    printf("%s",s1);

}