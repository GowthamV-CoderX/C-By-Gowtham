#include<stdio.h>
#define N 100
int main()
{
    int a[N][N];
    int r1,c1;
    printf("enter the rows and coloumns of a matrix : \n");
    scanf("%d%d",&r1,&c1);
    printf("enter matrix elements : \n");
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    int sumrow,sumcoloumn;
    for(i=0;i<r1;i++)
    {
        sumrow=sumcoloumn=0;
        for(j=0;j<c1;j++)
        {
            sumrow=sumrow+a[i][j];
            sumcoloumn=sumcoloumn+a[i][j];
        }
        printf(" sumrow is %d and coloumn is %d  \n",sumrow,sumcoloumn);
    }
}