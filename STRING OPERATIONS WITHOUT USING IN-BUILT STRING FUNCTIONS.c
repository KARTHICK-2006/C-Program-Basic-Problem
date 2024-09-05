


#include <stdio.h>
int stringLength (const char *str) {
    int length = 0;
    while (str [length] ! = '\0') {
        length++;
    }
    return length;
}
void stringCopy (char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int stringCompare (const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char *) str1 - *(const unsigned char *) str2;
}
void stringReverse (char *str) {
    char *end = str;
    char tmp;
    if (str) {
        while (*end) {
            ++end;
        }
        --end;
        while (str < end) {
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}
void stringToLower (char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32
        str++;
    }
}
void stringToUpper (char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32; 
        }
        str++;
    }
}
void stringConcat (char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main () {
    char str1[100], str2[100], temp [100];
    int choice;
    printf ("Enter string 1: ");
    scanf ("%s", str1);
    printf ("Enter string 2: ");
    scanf ("%s", str2);
    printf ("\n1. String Length\n2. String Copy\n3. String Compare\n4. String Reverse\n5. String Lower\n6. String Upper\n7. String Concatenation\n8. Exit\n");
    while (1) {
        printf ("\nEnter your choice: ");
        scanf ("%d", &choice);
        switch (choice) {
            case 1:
                printf ("Length of string 1: %d\n", stringLength(str1));
                printf ("Length of string 2: %d\n", stringLength(str2));
                break;
            case 2:
                stringCopy (temp, str1);
                printf ("Copied string: %s\n", temp);
                break;

            case 3:
                if (stringCompare (str1, str2) == 0)
                    printf ("Strings are equal\n");
                else
                    printf ("Strings are not equal\n");
                break;

            case 4:
                stringCopy (temp, str1);
                stringReverse(temp);
                printf ("Reversed string: %s\n", temp);
                break;

            case 5:
                stringCopy (temp, str1);
                stringToLower(temp);
                printf ("Lowercase string: %s\n", temp);
                break;

            case 6:
                stringCopy (temp, str1);
                stringToUpper(temp);
                printf ("Uppercase string: %s\n", temp);
                break;

            case 7:
                stringCopy (temp, str1);
                stringConcat (temp, str2);
                printf ("Concatenated string: %s\n", temp);
                break;



            case 8:
                printf ("Exiting...\n");
                return 0;
            default:
                printf ("Invalid choice\n");
                break;
        }
    }

    return 0;
}

