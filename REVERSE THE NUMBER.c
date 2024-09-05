#include<stdio.h>
int main()
{
    int num,a,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    printf("The reverse of the given number is %d",rev);
    return 0;
}

