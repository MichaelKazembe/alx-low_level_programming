#include "main"

/**
 * _strcmp - compares strings s1 & s2
 * @s1: string to compare
 * @s2: string to compare
 * return:0
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; i != '\0'; i++)
		for (j = 0 ; j != '\0'; j++)
		{
			if (s1[i] == s2[j])
				return (0);

			else if (s1[i] > s2[j])
			{	return (1);
			}
			else
			{
				return (-1);
			}
		}
	return (0);
}
