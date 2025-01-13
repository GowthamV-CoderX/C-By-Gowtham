#include<stdio.h>
int add(int a , int b)
{
    printf("addition is : %d\n",a+b);
}
int sub(int a , int b)
{
    printf("subtraction is : %d\n",a-b);
}
int mult(int a , int b)
{
    printf("multiplication is : %d\n",a*b);
}
int div(int a , int b)
{
    printf("division is : %d\n",a/b);
}
int main()
{
    int ch,a,b;
    int (*fptr[5])(int,int)={ add,sub,mult,div};
    printf("enter choice : ");
    scanf("%d",&ch);
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    (*fptr[ch])(a,b);

}