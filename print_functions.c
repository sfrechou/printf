#include "holberton.h"

/**
 * printchar - Entry point
 * @arguments: arguments for function.
 * @bytes: number of bytes.
 * Return: int.
 */
void printchar(int bytes, va_list arguments)
{
	bytes += 1;
	_putchar(va_arg(arguments, int));
	return (bytes);
}

/**
 * printstring - Entry point
 * @arguments: arguments for function.
 * @bytes: number of bytes.
 * Return: int.
 */
void printstring(int bytes, va_list arguments)
{
	int length, k;
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
 * @bytes: number of bytes.
 * Return: int.
 */
void printpercent(int bytes, va_list arguments)
{
	(void)arguments;
	bytes += 1;
	_putchar('%');
	return (bytes);
}

/**
 * printint - Entry point
 * @arguments: arguments for function.
 * @bytes: arguments for functions.
 * Return: int.
 */
void printint(int bytes, va_list arguments)
{
	int n;

	n = va_arg(arguments, int);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		bytes++;
	}
	_printint(n);
	return (bytes);
}

/**
 * _printint - Recursive function to print an int.
 * @bytes: number of bytes.
 * @n: int value of argument.
 * Return: void.
 */
void _printint(int bytes, int n)
{
	if ((n / 10) > 0)
	{
		_printint(n / 10);
	}
	bytes++;
	_putchar((n % 10) + '0');
	return (bytes);
}
