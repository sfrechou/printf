#include "holberton.h"

/**
 * printrot13 - Entry point - prints the rot13'ed string
 * @arguments: arguments from va_list passed to _printf
 * Return: number of characters printed.
 */
int printnon_printable(va_list arguments)
{
	char *array = va_arg(arguments, int);
	int i = 0, bytes = 0;
	unsigned int n, quotient;

	if (array == '\0')
	{
		return (-1);
	}
	while (array[i] != '\0')
	{
		if ((array[i] > 0 && array[i] < 32) || array[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			bytes += 2;
			n = array[i];
			quotient = n;
				if (quotient > 9)
				{
					_putchar(48 + (quotient / 16));
					_putchar(55 + (quotient % 16));
					bytes += 2;
				}
				else
				{
					_putchar(48);
					_putchar(48 + (quotient % 16));
					bytes += 2;
				}
		}
		else
		{
			_putchar(array[i]);
			bytes++;
		}
		i++;
	}
	return (bytes + 1);
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
