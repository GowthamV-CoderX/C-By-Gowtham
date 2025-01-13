#include<stdio.h>
int main()
{
	int i,a[5];
	printf("enter array elements : ");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		printf("array elements at index %d is : %d \n",i,a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("array elements at index %d is : %d \n",i,a[i]);
	}
}
