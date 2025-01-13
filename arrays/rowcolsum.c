#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumrow,sumcoloumn;
    printf("enter the elements of a matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is : \n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<3;i++)
    {
        sumrow=sumcoloumn=0;
        for(j=0;j<3;j++)
        {
            sumrow=sumrow+a[i][j];
            sumcoloumn=sumcoloumn+a[j][i];
        }
        printf("\nsum of row is : %d   and  sum of coloumn is : %d ",sumrow,sumcoloumn);
      
    }
}