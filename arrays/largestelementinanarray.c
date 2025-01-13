#include<stdio.h>
int main()
{
    int i,a[8];
    printf("enter array elements : \n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    int max;
    max=a[0];
    for(i=0;i<7;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("max element is : %d",max);
}