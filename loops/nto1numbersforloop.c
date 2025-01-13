#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a value for n : ");
	scanf("%d",&n);
	for(i=n;i<=n;i--)
	{
		count++;
		printf("%d is a natural number and count is %d \n",i,count);
		if(count==n)
		{
			break;
		}
	}
}
