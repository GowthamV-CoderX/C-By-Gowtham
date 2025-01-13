#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("%d is a perfect numbre",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
}
