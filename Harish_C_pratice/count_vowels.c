#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count =0;
	printf("Enter the string:");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')

			count++;
	}
	printf("vowels count:%d\n",count);
	return 0;
}

