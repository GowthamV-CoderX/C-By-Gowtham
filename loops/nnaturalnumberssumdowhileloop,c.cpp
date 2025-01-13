#include<stdio.h>
int main()
{
	int i=1,n,sum=0,count=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	do
	{
		count++;
		sum=sum+i;
		if(count==n)
		{
			break;
		}
		i++;
	}while(1);
	printf("sum of first %d natural numbers : %d",n,sum);
}
