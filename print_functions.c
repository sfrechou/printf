#include "holberton.h"

/**
 * printchar - Entry point
 * @arguments: arguments for function.
 * Return: int.
 */
int printchar(va_list arguments)
{
	int bytes;

	if (arguments == 0)
		arguments = NULL;

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
	int k, bytes;
	char *string;

	string = va_arg(arguments, char *);
	if (string == '\0')
	{
		string = "(null)";
	}
	for (k = 0; string[k] != '\0'; k++)
	{
		_putchar(string[k]);
	}
	bytes = k;
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
	int i, n, s, bytes = 0, cont = 0, r = 0;

	n = va_arg(arguments, int);
	if (n > INT_MIN && n < INT_MAX)
	{
		if (n == 0)
		{
			_putchar('0');
			bytes++;
		}
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
		while (s != 0)
		{
			r = r * 10;
			r = r + s % 10;
			s = s / 10;
		}
		for (i = 0; i < cont; i++, r /= 10)
		{
			_putchar((r % 10) + '0');
			bytes++;
		}
	}
	else
	{
		return (-1);
	}
	return (bytes);
}
