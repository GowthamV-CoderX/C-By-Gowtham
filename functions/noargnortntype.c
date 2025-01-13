#include<stdio.h>
void sum(void);
int main()
{
    sum();
}
void sum()
{
    int a=5,b=7,sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}