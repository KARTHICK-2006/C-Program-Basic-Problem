#include<stdio.h> 
#include<stdlib.h> 
#include <string.h> 
int main() 
{ 
FILE* ptr; 
char file[100]; 
ptr = fopen("her.txt", "w"); 
fputs("hello world",ptr); 
fclose(ptr); 
ptr = fopen("her.txt", "r"); 
fgets(file,12,ptr); 
printf("%s",file); 
fclose(ptr); 
return 0; 
}

