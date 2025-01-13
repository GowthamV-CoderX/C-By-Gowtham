#include<stdio.h>
int main()
{
	int i=0,n,sum=0,count=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	for(i=0;i>=0;i++)
	{
		if(i%2==0)
		{
		sum=sum+i;
		count++;
	    }
		if(count==n)
		{
			break;
		}
		
	}
	printf("sum of first %d even numbers is %d",n,sum);
}
