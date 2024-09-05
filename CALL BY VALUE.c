#include<stdio.h>
int swap(int,int);
main()
{
    int a=20,b=40;
    printf("The values are %d %d\n",a,b);
    swap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The swapped values are %d %d",a,b);
}


