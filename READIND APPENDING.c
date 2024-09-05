#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{

	FILE*f1;
	FILE*f2;
	f1 = fopen("solo.txt","r");
	char file[100];
	fgets(file,100,f1);
	f2 = fopen("leveling.txt", "a");
	fprintf(f2,file);
    fclose(f1);
    fclose(f2);
    return 0;
}

