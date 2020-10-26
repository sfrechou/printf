#include "holberton.h"

/**
 * printchar - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printchar(va_list arguments)
{
	_putchar(va_arg(arguments, int));
}

/**
 * printstring - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printstring(va_list arguments)
{
        int length, k;
	char *string;

	string = va_arg(arguments, char *);
	length = _strlen(string);
	for (k = 0; k < length; k++)
	{
		_putchar(string[k]);
	}
}

/**
 * printpercent - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printpercent(va_list arguments)
{
	(void)arguments;
	_putchar('%');
}

/**
 * printint - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printint(va_list arguments)
{
	int n;
	n = va_arg(arguments, int);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	_printint(n);

}
/**
 * printdecimal - Entry point
 * @list: d
 *
 *
 * Return: Always 0 (Success)
 */
void printdecimal(va_list arguments)
{
	int n;
	n = va_arg(arguments, int);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	_printint(n);

}
/**
 * _printint - Recursive function to print an int.
 * @n: int value of argument.
 * Return: void.
 */
void _printint(int n)
{
	if((n / 10) > 0)
	{
		_printint(n / 10);
	}
	_putchar((n % 10) + '0');
}
