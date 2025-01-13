#include<stdio.h>
#include<stdbool.h>
bool prime();
int main()
{
   bool first=prime();
    if(first)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
}
bool prime()
{
    int i,count=0;
    int n;
    printf("enter a numnber for n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count<=2)
    {
        return true;
    }
    else
    {
        return false;
    }
}