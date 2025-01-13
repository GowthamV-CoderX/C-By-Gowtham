#include<stdio.h>
#define N 100
int main()
{
    int i,a[N],n;
    printf("enter the size of array : \n");
    scanf("%d",&n);
    printf("enter array elements :  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max,min;
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\n max element in an array is : %d and min element in an array is : %d \n",max,min);
}