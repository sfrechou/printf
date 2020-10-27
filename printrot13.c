#include "holberton.h"

/**
 * printrot13 - Entry point - prints the rot13'ed string
 * @arguments: arguments from va_list passed to _printf
 * Return: Always 0 (Success)
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
 *
 *
 * Return: Always 0 (Success)
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
