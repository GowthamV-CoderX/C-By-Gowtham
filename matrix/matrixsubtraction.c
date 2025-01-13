#include<stdio.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j;
    int r1,c1;
    printf("enter the rows and coloumns of firt matrix : ");
    scanf("%d%d",&r1,&c1);
    printf("enter the elements of the first matrix : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r2,c2;
    printf("enter the row and coloumns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements of the second matrix : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("first matrix is : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second matrix is : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(r1==r2 && c1==c2)
    {
        printf("matrix addition is possible \n");
        printf("additione of given two matrices is : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix addition is not possible");
    }
    
    
}