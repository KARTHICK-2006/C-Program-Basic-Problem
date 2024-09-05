#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    int factorial=fact(a);
    printf("%d is the factorial of %d",factorial,a);
    return 0;
}
int fact(int a)
{
    if (a==1)
        return 1;
    else
        return a*fact(a-1);
}

