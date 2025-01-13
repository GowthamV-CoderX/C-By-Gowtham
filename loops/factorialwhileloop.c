#include<stdio.h>
int main()
{
	int i,factorial=1,n;
	printf("enter a number for n : ");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		factorial=factorial*i;
		i--;
	}
	printf("%d is the factorial of %d",factorial,n);
}
