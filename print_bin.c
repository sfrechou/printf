#include "holberton.h"

/**
 * print_bin - Entry point - Function that prints binaries.
 * @arguments: arguments that will replace format specifiers.
 * Return: number of characters printed.
 */
int print_bin(va_list arguments)
{
	int i = 0, j, bytes = 0;
	int binarray[100];
	unsigned int n;

	n = va_arg(arguments, int);
	if (n == 0)
	{
		_putchar('0');
		bytes++;
		return (bytes);
	}
	while (n > 0)
	{
		binarray[i] = n % 2;
		n = n / 2;
		bytes++;
		i++;
	}
	if (i > 32)
	{
		return (-1);
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binarray[j] + '0');
	}
	return (bytes);
}
