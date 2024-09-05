
#include <stdio.h>
int stringLength(char str[])
{
   int len = 0;
   while (str[len] != '\0')
   {
       len++;
   }
   return len;
} 
void stringCopy(char source[], char destination[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}
int stringCompare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
            {
                break;
            }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
        {
            return str1[i] - str2[i];
        }
}
void stringReverse(char str[])
{
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
void stringToLower(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
    i++;
    }
}
void stringToUpper(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
    }
    i++;
    }
    }
void stringConcatenate(char str1[], char str2[])
{
    int i = 0;
    int len1 = stringLength(str1);
    while (str2[i] != '\0')
        {
            str1[len1 + i] = str2[i];
    i++;
    }
    str1[len1 + i] = '\0';
}
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    printf("\nString Length:\n");
    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));
    printf("\nString Copy:\n");
    char copiedStr[100];
    stringCopy(str1, copiedStr);
    printf("Copied string: %s\n", copiedStr);
    printf("\nString Compare:\n");
    int comparison = stringCompare(str1, str2);
    if (comparison == 0)
        printf("The strings are equal.\n");
    else if (comparison < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");
        printf("\nString Reverse:\n");
        stringReverse(str1);
        printf("Reversed first string: %s\n", str1);
        printf("\nString Lower:\n");
        stringToLower(str2);
        printf("Lowercase second string: %s\n", str2);
        printf("\nString Upper:\n");
        stringToUpper(str2);
        printf("Uppercase second string: %s\n", str2);
        printf("\nString Concatenation:\n");
        stringConcatenate(str1, str2);
        printf("Concatenated string: %s\n", str1);
        return 0;
}

