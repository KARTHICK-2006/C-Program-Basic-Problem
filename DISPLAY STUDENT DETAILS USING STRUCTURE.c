#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}s[5];
int main()
{
    printf("Enter name:");
    scanf("%s",s[5].name);
    printf("Enter roll number:");
    scanf("%d",&s[5].roll);
    printf("Enter marks scored:");
    scanf("%f",&s[5].marks);
    printf("NAME:%s",s[5].name);
    printf("\nROLL NO:%d",s[5].roll);
    printf("\nMarks scored:%0.1f",s[5].marks);
}

