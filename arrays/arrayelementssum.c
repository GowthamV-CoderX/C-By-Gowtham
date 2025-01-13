#include<stdio.h>
#define N 100
int main()
{
    int a[N],i,n;
    printf("enter size for array : ");
    scanf("%d",&n);
    int sum=0;
    printf("enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array elements are : %d",sum);
}