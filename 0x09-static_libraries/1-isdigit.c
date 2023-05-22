#include "main.h"

/**
 * _isdigit - determine num if digit
 *
 * @c: character to determine if digit
 *
 * Return: gives boolean value
 */
	
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
