#include<stdio.h>
int main()
{
	int i,n,sum=0,count=0;
	printf("enter a number for n :  ");
	scanf("%d",&n);
	for(i=1;i>=0;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
			count++;
		}
		if(count==n)
		{
			break;
		}
	}
	printf("sum of first %d odd number is %d",n,sum);
}
