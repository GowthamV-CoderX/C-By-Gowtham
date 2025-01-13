#include<stdio.h>
int main()
{
	int i,n,sum=0,count=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		count++;
		sum=sum+i;
	    printf("%d is natural number %d is sum  count is %d \n",i,sum,count);
	    if(count==n)
	    {
	    	break;
		}
		
    }
}
