#include<stdio.h>
int sumoffirstnodd(int );
int main()
{
    int p;
    p=sumoffirstnodd(1);
    printf("sum of first 10 odd number is : %d",p);
}
int sumoffirstnodd(int x)
{
    static int sum=0,count=0;
    if(count==10)
    {
        return sum;
    }
    if(x%2!=0)
    {
        count++;
        sum=sum+x;
    }
    sumoffirstnodd(x+1);
}