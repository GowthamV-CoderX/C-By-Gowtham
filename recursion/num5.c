
#include <stdio.h>
int num(int n);
int main()
{
    printf("%d ",num(6));
   
}
int num(int n)
{
    static int k=1;
    if(n>0)
    {
        
        printf("%d ",n);
        k++;
        num(n-1);
        printf("%d ",n);
        
        printf("%d ",k);
    }
    else
    {
        return 0;
    }

}