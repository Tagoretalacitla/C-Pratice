#include<stdio.h>
int main( )
{
	char word1[40], word2[40], word3[40], word4[40];
	printf("Enter text of word1, word2: \n");
	scanf("%s %s", word1, word2);
	printf("Enter the word3:");
	scanf("%s", word3);
	printf("Enter the word4:");
	scanf("%s", word4);
	printf("\n");
	printf("word1 = %s\nword2 = %s\n", word1, word2);
	printf("word3 = %s\nword4 = %s\n", word3, word4);
	return 0;
}
