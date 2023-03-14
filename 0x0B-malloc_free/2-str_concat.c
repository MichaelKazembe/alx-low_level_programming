#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concats strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns concated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, length1, length2;
	char *ptr;

	i = length1 = length2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		length1++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		length2++;
	}
	ptr = malloc((length1 + length2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		ptr[i + length1] = s2[i];
	}
	ptr[i + length1] = '\0';
	return (ptr);
}

