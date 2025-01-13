#include<stdio.h>
int main()
{
	int n,r,temp,sum=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	temp=n;
	for(;n>0;)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	temp=n;
	printf("%d is the reverse number for %d",sum,n);
}
