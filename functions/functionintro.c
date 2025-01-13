#include<stdio.h>
int sum()
{
    int a,b,sum;
    printf("enter two numbers for a and b : \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d \n",sum);
}
int main()
{
    sum();
    puts("hello");
    sum();
    sum();
}