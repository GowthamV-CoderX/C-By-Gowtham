#include<stdio.h>
void print(int count);
int main()
{
    print(20);
}
void print(int count)
{
    if(count==0)
    {
        return;
    }
    printf("diamond\n");
    print(count-1);
}