#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *Return: On sucees 1
 *On error, -1 is rturned, and errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
