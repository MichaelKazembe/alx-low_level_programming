#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is a pointer to a string of 0 and 1 chars
 *
 * return: return unsigned int, otherwise a 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int decimal_value = 1;
	unsigned int remainder;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		remainder = *b - '0';
		decimal = decimal + remainder * decimal_value;
		b++;
		decimal_value *= 2;
	}
	return (decimal);
}
