#include<stdio.h>
int sumofneven(int );
int main()
{
    int k;
    k=sumofneven(10);
    printf("sum of n odd numbers is : %d",k);
}
int sumofneven(int x)
{
    static int sum=0;
    if(x%2!=0 && x!=0)
    {
        sum=sum+x;
    }
    if(x==0)
    {
        return sum;
    }
    sumofneven(x-1);
}