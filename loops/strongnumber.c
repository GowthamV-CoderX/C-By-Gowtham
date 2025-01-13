#include<stdio.h>
int main()
{
	int i,f,temp,n,r,sum=0;
	printf("enter a number for n :  ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		f=1;
		for(i=r;i>0;i--)
		{
			f=f*i;
		}
		sum=sum+f;
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
