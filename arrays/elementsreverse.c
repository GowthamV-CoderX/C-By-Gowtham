#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter array elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}