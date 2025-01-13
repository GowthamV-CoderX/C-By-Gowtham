#include<stdio.h>
int maxelement();
int main()
{
    int k;
    k=maxelement();
    printf("%d is maxelement",k);

}
int maxelement()
{
    int a,b,c,maxelement;
    printf("enter numbers for a b c :");
    scanf("%d%d%d",&a,&b,&c);
    if( a>b && a>c)
    {
        maxelement=a;
    }
    else if(b>a && b>c)
    {
        maxelement=b;
    }
    else if(c>a && c>b)
    {
        maxelement=c;
    }
    return maxelement;

}