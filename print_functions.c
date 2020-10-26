#include "holberton.h"

/**
 * printchar - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int printchar(va_list arguments)
{
	int bytes;

	_putchar(va_arg(arguments, int));
	bytes = 1;
	return (bytes);
}

/**
 * printstring - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int printstring(va_list arguments)
{
	int length, k, bytes;
	char *string;

	string = va_arg(arguments, char *);
	length = _strlen(string);
	for (k = 0; k < length; k++)
	{
		_putchar(string[k]);
	}
	bytes = length;
	return (bytes);
}

/**
 * printpercent - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int printpercent(va_list arguments)
{
	int bytes;

	(void)arguments;
	bytes = 1;
	_putchar('%');
	return (bytes);
}

/**
 * printint - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int printint(va_list arguments)
{
	int i, s, n, bytes = 0, cont = 0;

	n = va_arg(arguments, int);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		bytes++;
	}
	s = n;
	while ((n / 10) > 0)
	{
		cont++;
		n /= 10;
	}
	cont++;

	for (i = 0; i < cont; i++, s /= 10)
	{
		_putchar((s % 10) + '0');
		bytes++;
	}
	return (bytes);
}
