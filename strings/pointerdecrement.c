#include<stdio.h>
int main()
{
    int a[]={ 3,2,65,0,56 };
    int *p=&a[2];
   // printf("%d  %d  %d",*--p,*--p,*--p);
   printf("%d %d %d",--(*p),(*p)++,++(*p));

}