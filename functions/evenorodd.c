#include<stdio.h>
#include<stdbool.h>
bool evenorodd(int);
int main()
{
   bool first=evenorodd(12332);
   if(first)
   printf("even number");
   else
   printf("odd number");
   return 5;
}
bool evenorodd(int a)
{
  //  int a;
  //  printf("enter a number for a :\n");
  //  scanf("%d",&a);
    if(a%2==0)
    {
        return true;
    }
    else
    {
       // printf("%d is odd\n",a);
       return false;
    }
}