#include "holberton.h"

/**
 * print_bin - Entry point
 * @arguments: s
 *
 *
 * Return: Always 0 (Success)
 */
int print_bin(va_list arguments)
{
	int i = 0, j, bytes = 0, m;
	int binarray[32];
	unsigned int n;

	m = va_arg(arguments, int);

	if (m == 0)
	{
		_putchar('0');
		bytes++;
		return (bytes);
	}
	if (m < 0)
	{
		n = m * -1;
	}
	else
	{
		n = m;
	}
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
