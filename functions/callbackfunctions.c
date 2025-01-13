#include<stdio.h>
int sum(int a , int b)
{
    printf("sum=%d\n",a+b);
}
int sub(int a , int b)
{
    printf("sub=%d\n",a-b);
}
int display(int (*fptr)(int , int))
{
    fptr(5,1);
}
int main()
{
    display(sum);
    display(sub);
}