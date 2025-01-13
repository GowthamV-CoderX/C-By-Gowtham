#include<stdio.h>
int main()
{   int r1,c1;
    printf("enter the rows and couloumns of a first matrix : ");
    scanf("%d%d",&r1,&c1);
    int first[r1][c1];
    printf("enter first matrix elements :");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&first[i][j]);
        }
    }
    int r2,c2;
    printf("enter the rows and coulmns of second matrix : ");
    scanf("%d%d",&r2,&c2);
    int second[r2][c2];

    printf("enter second matrix elements :");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&second[i][j]);
        }
    }

    if(c1!=r2)
    printf("multiplication is not possible for given two matrices ");
    else
    {
        int result[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {   int sum=0;
                for(int k=0;k<c1;k++)
                {
                    sum+=first[i][k]*second[k][j];
                }
                result[i][j]=sum;
            }
        }
        printf("first matrix: \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf("%d ",first[i][j]);
            }
            printf("\n");
        }
         printf("second matrix: \n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                printf("%d ",second[i][j]);
            }
            printf("\n");
        }
         printf("resultant matrix: \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {

                printf("%d ",result[i][j]);
            }
            printf("\n");
        }
    }
}

