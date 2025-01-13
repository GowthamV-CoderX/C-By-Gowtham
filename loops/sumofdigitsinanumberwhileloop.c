#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digits in a number is %d",sum);
}
