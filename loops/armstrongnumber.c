#include<stdio.h>
int main()
{
	int temp,n,r,cube,sum=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		cube=r*r*r;
		sum=sum+cube;
		n=n/10;
	}
	n=temp;
	if(sum==n)
	{
		printf("it is a armstrong number");
	}
	else
	{
		printf(" it is not a armstrong number");
	}
}
