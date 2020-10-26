#include "holberton.h"

/**
 * _printf - Entry point
 * @format: s
 *
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...)
{
	print_format functions[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"i", printint},
		{"d", printint},
		{NULL, NULL}
	};
	int bytes = 0;
	va_list arguments;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arguments, format);
	bytes += fortylines(format, arguments, functions);
	va_end(arguments);
	return (bytes);
}

/**
 * fortylines - Entry point
 * @format: s
 * @arguments: j
 * @functions: f
 *
 * Return: Always 0 (Success)
 */
int fortylines(const char *format, va_list arguments, print_format *functions)
{
	int bytes = 0, i = 0, j = 0, flag = 0;

	while (format[i] != '\0')
	{
		flag = 0;
		if (format[i] == '%')
		{
			if (format[i] == '%' && format[i + 1] == '\0')
			{
				return (-1);
			}
			while (functions[j].caracter != NULL)
			{
				if (format[i + 1] == functions[j].caracter[0])
				{
					flag = 1;
					bytes += functions[j].f(arguments);
					break;
				}
				j++;
			}
		}

		if (flag == 1)
		{
			if (format[i + 1] == '\0' || format[i + 2] == '\0')
			{
				break;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
			bytes++;
		}
		j = 0;
	}
	return (bytes);
}
