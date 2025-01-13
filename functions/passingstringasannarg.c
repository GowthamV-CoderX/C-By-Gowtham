#include<stdio.h>
char display(char []);
int main()
{
    char str[]="jenny";
    display(str);
}
char display(char str[])
{
    printf("string is : %s",str);
}