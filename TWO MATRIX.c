#include<stdio.h>
int main()
{
     int a[25][25],b[25][25],s[25][25],i,j,k,r,c;
    printf("Enter r and c of array:");
    scanf("%d %d",&r,&c);
    printf("Enter array1:");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter array2:");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
   for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            s[i][j]=0;
            for(k=0;k<c;k++)
            {
              s[i][j]=s[i][j]+a[i][k]*b[k][j];

            }
        }
    }
    printf("The result array is\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf(" %d",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}

