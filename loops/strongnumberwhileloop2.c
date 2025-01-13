#include<stdio.h>
int main()
{
	int i,n,r,factor,temp,sum=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		factor=1;
		for(i=r;i>0;i--)
		{
			factor=factor*i;
		}
		sum=sum+factor;
		n=n/10;
	}
    n=temp;
    if(sum==n)
    {
    	printf("it is a strong number");
	}
	else
	{
		printf("it is not a strong number");
	}
}
