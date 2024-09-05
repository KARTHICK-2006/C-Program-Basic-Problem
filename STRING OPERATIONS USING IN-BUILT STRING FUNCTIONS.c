#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],copy[30];
    scanf("%s",name);
    printf("The length of string is:%d",strlen(name));
    printf("\nThe copied string is:%s",strcpy(copy,name));
    printf("\nThe comparison of string is:%d",strcmp(name,copy));
    printf("\nThe uppercase of string is:%s",strupr(name));
    printf("\nThe lowercase of string is:%s",strlwr(name));
    printf("\nThe concatenation string and copy is:%s",strcat(name,copy));
    printf("\nThe reverse of string is:%s",strrev(copy));
    return 0;
}

