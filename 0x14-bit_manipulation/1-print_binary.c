#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)

{
	unsigned int remainder;
	unsigned long binary = 0;
	unsigned long binary_value = 1;

	if (n == 0)
	{
		printf("binary number for %ld is: %ld\n", n, binary);
		return;
	}

	while (n != 0)
	{
		remainder = n % 2;
		binary = binary + (remainder * binary_value);
		n = n / 2;
		binary_value = binary_value * 10;
	}
	printf("binary number for %ld, is %ld\n", n, binary);
}
