#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="vudumu";
    char s2[30]="gowtham";
    strcat(s2,s1);
    printf("string after concatination is : %s \n",s1);
    puts(s1);
}