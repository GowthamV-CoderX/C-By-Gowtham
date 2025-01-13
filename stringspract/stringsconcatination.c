#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char s1[30];
    printf("enter name for string s1 : ");
    gets(s1);
    char s2[45];
    printf("enter name for string s2 : ");
    gets(s2);
    strcat(s1,s2);
    printf("%s \n",s1);
    count=strlen(s1);
    printf("length of concatinated string is %d",count);
}