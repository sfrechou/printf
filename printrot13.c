#include "holberton.h"

/**
 * printrot13 - Entry point - prints the rot13'ed string
 * @arguments: arguments from va_list passed to _printf
 * Return: number of characters printed.
 */
int printnon_printable(va_list arguments)
{
	char *array = va_arg(arguments, char *);
	int i, bytes = 0;
	unsigned int n, remainder, quotient;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; array[i] != '\0'; i++)
	{
		if ((array[i] >= 0 && array[i] < 32) || array[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			bytes += 2;
			n = array[i];
			i++;
			quotient = n;
			remainder = quotient % 16;
			while (quotient != 0)
			{
				if (remainder < 10)
				{
					_putchar(48 + remainder);
					bytes++;
				}
				else
				{
					_putchar(48);
					_putchar(55 + remainder);
					bytes += 2;
				}
				quotient /= 16;
			}
		}
		_putchar(array[i]);
		bytes++;
	}
	return (bytes);
}
/**
 * printrot13 - Entry point - prints the rot13'ed string
 * @arguments: arguments from va_list passed to _printf
 * Return: number of characters printed.
 */
int printrot13(va_list arguments)
{
	int i, j, bytes = 0;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *string;


	string = va_arg(arguments, char *);
	if (string == NULL)
	{
		return (-1);
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; abc[j] != '\0'; j++)
		{
			if (string[i] == abc[j])
			{
				_putchar(rot[j]);
				bytes++;
				break;
			}
		}
		if (abc[j] == '\0')
		{
			_putchar(string[i]);
			bytes++;
		}
	}
	return (bytes);

}

/**
 * revstring - Entry point - prints the reversed string
 * @arguments: arguments from va_list passed to _printf
 * Return: number of characters printed.
 */
int revstring(va_list arguments)
{
	char *string = va_arg(arguments, char *);
	int length, i, bytes = 0;

	if (string == NULL)
	{
		return (-1);
	}

	length = _strlen(string);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(string[i]);
		bytes++;
	}
	return (bytes);
}
