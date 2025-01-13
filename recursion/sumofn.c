#include<stdio.h>
int sumofn(int );
int main()
{
    int x;
    x=sumofn(5);
    printf("sum of 10 natural number is : %d",x);
}
int sumofn(int a)
{
    int x;
    static int sum=0;
    if(a==0)
    {
        return sum;
    }
    sum=sum+a;
    sumofn(a-1);
}