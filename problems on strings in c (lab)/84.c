//program using strcpy
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter a string\n");
	gets(str1);
	printf("Enter another string\n");
	gets(str2);
    printf("\n Before copy  str1 = ");
	puts(str1);
    strcpy(str1,str2);
	printf("\n After copy  str1=");
	puts(str1);
	return 1;
}
