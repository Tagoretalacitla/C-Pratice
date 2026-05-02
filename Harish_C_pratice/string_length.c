#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",str);
	printf("Length of string:%zu\n",strlen(str));
	return 0;
}
