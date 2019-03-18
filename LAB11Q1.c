#include<stdio.h>
int main()
{
    int a[4][4],b[4][4],sum[4][4],i,j;
    for(i=0;i<4;i++)
    {
        printf("enter the elements of first array(4 by 4):");
        for(j=0;j<4;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        printf("enter the elements of second array(4 by 4):");
        for(j=0;j<4;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of two arrays:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" \t%d",sum[i][j]);
        }
        printf("\n");
    }
}
