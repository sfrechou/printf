#include "holberton.h"

/**
 * print_hexa - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int print_hexa(va_list arguments)
{
	unsigned int n, quotient;
	int remainder;
	int i, j = 0, bytes = 0;
	char array[100];

	n = va_arg(arguments, int);
	quotient = n;

	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
		{
			bytes++;
			array[j++] = 48 + remainder;
		}
		else
		{
			bytes++;
			array[j++] = 87 + remainder;
		}
		quotient = quotient / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}

	return (bytes);
}

/**
 * print_hexax - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int print_hexax(va_list arguments)
{
	unsigned int n, quotient;
	int remainder;
	int i, j = 0, bytes = 0;
	char array[100];

	n = va_arg(arguments, int);
	quotient = n;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
		{
			bytes++;
			array[j++] = 48 + remainder;
		}
		else
		{
			bytes++;
			array[j++] = 55 + remainder;
		}
		quotient = quotient / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}
	return (bytes);
}
