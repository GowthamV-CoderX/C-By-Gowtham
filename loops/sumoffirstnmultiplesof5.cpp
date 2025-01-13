#include<stdio.h>
int main()
{
	int i,n,sum=0,count=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	for(i=1;i>=0;i++)
	{
		if(i%5==0)
		{
			sum=sum+i;
			count++;
		}
		if(count==n)
		{
			break;
		}
	}
	printf("sum of first %d multiples of 5 is %d",n,sum);
}
