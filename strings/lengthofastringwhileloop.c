#include<stdio.h>
int main()
{
    int count=0,i=0;
    char name[30];
    printf("enter name : ");
    gets(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("length of a string is : %d",count);
}