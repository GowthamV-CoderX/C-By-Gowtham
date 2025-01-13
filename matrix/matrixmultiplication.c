#include<stdio.h>
#define N 100
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,sum;
    int r1,c1;
    printf("enter the rows and coloumns of first matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements of a first matrix : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r2,c2;
    printf("enter the rows and coloumns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements of second matrix : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix(a[i][j]) is : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix(b[i][j]) is : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(c1!=r2)
    {
        printf("multiplication is not possible");
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
        }
    }
    printf("multiplication of two matrices is : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}