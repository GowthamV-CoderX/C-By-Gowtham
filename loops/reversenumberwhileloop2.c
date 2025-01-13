#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter a number for n : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	temp=n;
	printf("%d is a reverse number",sum);
}
