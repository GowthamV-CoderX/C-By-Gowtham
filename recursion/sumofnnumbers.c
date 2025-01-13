#include<stdio.h>
int sumofnnumbers(int );
int main()
{
    printf("sum of first n numbers is : %d",sumofnnumbers(5));
}
int sumofnnumbers(int a)
{
    if(a==1)
    {
        return 1;
    }
    int sumnm1=sumofnnumbers(a-1);
    int sum=sumnm1+a;
}