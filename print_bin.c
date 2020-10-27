#include "holberton.h"

/**
 * alloc_grid - Entry point
 * @width: s
 * @height: s
 *
 * Return: Always 0 (Success)
 */
int print_bin(va_list arguments)
{
	int n, i = 0, j, bytes = 0;
	int binarray[32];

	n = va_arg(arguments, int);

	while (n > 0)
	{
		binarray[i] = n % 2;
		n = n / 2;
		bytes++;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binarray[j] + '0');
	}
	return (bytes);
}
