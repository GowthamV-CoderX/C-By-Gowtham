#include<stdio.h>
int main()
{
	int i,marks[5];
	float sum=0,avg;
	printf("enter the array elements : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	printf("%f is the sum",sum  :);
	avg=sum/5;
	printf("  %f is the avg of given 5 elemnts ",avg);
	
}
