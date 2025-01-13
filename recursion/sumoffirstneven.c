#include<stdio.h>
int sumoffirstneven(int );
int main()
{
    int p;
    p=sumoffirstneven(0);
    printf("sum of first 10 even number is : %d",p);
}
int sumoffirstneven(int x)
{
    static int sum=0,count=0;
    if(count==10)
    {
        return sum;
    }
    if(x%2==0)
    {
        count++;
        sum=sum+x;
    }
    sumoffirstneven(x+1);
}