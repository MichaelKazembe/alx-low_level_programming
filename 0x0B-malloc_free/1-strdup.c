#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to copy
 * Return: char to newly duplicated string
 */

char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	ptr = malloc(c + 1 * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = str[i];

	return (ptr);

}
