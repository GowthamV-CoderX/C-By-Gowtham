#include<stdio.h>
int main()
{
	int i=0,n,count=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	while(1)
	{
		i++;
		count++;
		printf("%d is a natural number \n",i);
		if(count==n)
		{
			break;
		}
    }
}
