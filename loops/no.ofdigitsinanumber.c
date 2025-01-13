#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter a number for n : ");
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("no.of digits in a number is %d",count);
}
