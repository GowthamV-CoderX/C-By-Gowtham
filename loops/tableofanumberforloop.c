#include<stdio.h>
int main()
{
	int i,n,ans;
	printf("enter a value for n : ");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		ans=n*i;
		printf("%d*%d=%d \n",n,i,ans);
	}
}
