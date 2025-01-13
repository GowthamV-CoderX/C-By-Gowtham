#include<stdio.h>
int max(int [],int );
int min(int [],int );
int main()
{
    int a[]={ 34,23555,343,3233,234,2,3 ,346,34535,22},maxinarray;
    maxinarray=max(a,9);
    printf("max element in array is : %d\n",maxinarray);
    int mininarray=min(a,9);
    printf("min element in array is : %d\n",mininarray);

}
int max(int a[],int size)
{
    int i,max;
    max=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int size)
{
    int i,min;
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}