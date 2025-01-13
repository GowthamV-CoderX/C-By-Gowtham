#include<stdio.h>
#define N 50
int main()
{
    int a[N],i,n;
    printf("enter size of array : ");
    scanf("%d",&n);
    printf("enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}