#include<stdio.h>
int main()
{
    int size,i,j;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        int min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
                {
                    min=j;
                }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;

        }
    }
    for (i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}






