#include <stdio.h>
/**
 * main - prints all arguments
 * @av: array of characters
 * @ac: number of arguments
 *
 * Return: 0 if successful, 1 if it fails
 */

int main(int ac, char **av)
{
	int i;

	printf("Args Number:%d\n", ac - 1);
	for (i = 1; i < ac; i++)
	{
		printf("args[%d] is: %s\n", i, av[i]);

	}

	return (0);
}
