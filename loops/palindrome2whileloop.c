#include<stdio.h>
int main()
{
	int n,r,sum=0,temp=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10;
		n=n/10;
	}
	temp=n;
	if(sum==n)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
}
