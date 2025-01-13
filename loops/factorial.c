#include<stdio.h>
int main()
{
	int i,factorial=1,n;
	printf("enter a number for n : ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		factorial=factorial*i;
	}
	printf("%d is factorial of given %d",factorial,n);
}
