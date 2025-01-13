#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter a value for n : ");
	scanf("%d",&n);
	i=n;
	while(1);
	{
		count++;
		printf("%d is a natural number and count is %d \n",i,count);
		i--;
		if(count==n)
		{
			break;
		}
	}
}
