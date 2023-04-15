#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD 150
#define MAX_WORD_LENGTH 50

char** split_str(char* str, int* num_words)
{
	char **words = NULL;
	char *token = NULL;
	int i = 0;

	words = malloc(MAX_WORD * sizeof(char*));
	token  = strtok(str, " ");
	while(token != NULL)
	{
		words[i] = malloc(MAX_WORD_LENGTH * sizeof(char));
		strcpy(words[i], token);
		i++;
		token = strtok(NULL, " ");
	}

	*num_words = i;
	
	
	return (words);
}

int main()
{

	char str[MAX_WORD];
	int num_words = 0;
	char** words = NULL;

	printf("Enter a string: ");
	scanf("%[^\n]s", str); 

	words = split_str(str, &num_words);

	printf("Number of words: %d\n", num_words);
	for (int i = 0; i < num_words; i++)
	{
		printf("%s\n", words[i]);
		free(words[i]);
	}

	free(words);

	return 0;
}
