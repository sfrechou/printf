#include "holberton.h"

/**
 * printchar - Entry point - Function tha prints a character.
 * @arguments: arguments that will replace format specifiers.
 * Return: number of characters printed.
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
	int i, j, digitos = 0, power, n, huevo = 0, bytes = 0;
	unsigned int a, b;

	n = va_arg(arguments, int);
	if (n == 0)
	{
		_putchar('0');
		bytes++;
		return (bytes);
	}
	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
		bytes++;
	}
	else
	{
		a = n;
	}
	b = a;
	while ((a / 10) != 0)
	{
		digitos++;
		a /= 10;
	}

	for (i = 0; i < digitos; i++)
	{
		power = 1;
		for (j = i; j < digitos; j++)
		{
			power = power * 10;
		}
		huevo = b / power;
		b = b - (huevo * power);
		_putchar(huevo + '0');
	}
	_putchar(b + '0');
	return (bytes + digitos + 1);
}
