#include "main.h"

/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(dest);
	
	for (i=0; src[i] ! = '\0'; i++)
	{
		dest[i+j] = src[i];
	}
	dest[i+j] = '\0';
	return (dest);
}

