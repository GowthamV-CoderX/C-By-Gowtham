#include<stdio.h>
//#include<conio.h>
int main()
{
    int a[]={7,4,10,8,3,1};
    int n=6;
    for(int i=0;i<n;i++)
    {
       int min=i;
       for(int j=i+1;j<n;j++)
       {
            if(a[j]<a[min])
            {
                min=j;
            }
       }
       if(min!=i)
       {
            //swap(a[i],a[min]);
            int temp=a[min];
            a[min]=a[i];
            a[i]=temp;
       }
       printf("\n");
       for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
