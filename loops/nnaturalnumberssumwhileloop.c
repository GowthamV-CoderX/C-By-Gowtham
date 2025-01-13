#include<stdio.h>
int main()
{
	int i=0,n,sum=0,count=-1;
	printf("enter a number : ");
	scanf("%d",&n);
	while(1)
	{
    
		count++;
		sum=sum+i;
		if(count==n)
		{
			break;
	    }
	    i++;
	}
	printf("sum of first %d natural numbers: %d ",n,sum);
}
