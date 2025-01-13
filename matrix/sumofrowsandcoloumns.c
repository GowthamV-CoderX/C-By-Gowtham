#include<stdio.h>
#define N 100
int main()
{
    int a[N][N],i,j;
    int r1,c1;
    printf("enter row and coloumn of a matrix : ");
    scan("%d%d",&r1,&c1);
    printf("enter matrix elements :");
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    int rowsum;
    for(i=0;i<r1;i++)
    {
        rowsum=0;
        for(j=0;j<c1;j++)
        {
            rowsum=rowsum+a[i][j];
        }
    }
    int coloumnsum;
    for(j=0;j<c1;j++)
    {
        coloumnsum=0;
        for(i=0;i<r1;i++)
        {
            coloumnsum=coloumnsum+a[i][j];
        }
    }
}