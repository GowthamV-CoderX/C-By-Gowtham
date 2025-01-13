#include<stdio.h>
#include<string.h>
int main()
{
    int length,i;
    char s1[30];
    printf("enter s1 string name : \n");
    gets(s1);
    length=strlen(s1);
    int a;
    for(i=0;i<length/2;i++)
    {
        a=s1[i];
        s1[i]=s1[length-i-1];
        s1[length-i-1]=a;
    }
  //  printf("%s",s1);
    puts(s1);
} 
