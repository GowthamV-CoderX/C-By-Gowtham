#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={ 15,16,6,8,5 };
    for(int i=0;i<4;i++)
    {
        int flag=0;
        for( int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
               flag++;
            }
        }
        if(flag==0)
        break;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}