#include "holberton.h"

/**
 * _printf - Entry point - Main function that formats and prints data.
 * @format: format string that specifies how arguments are converted for output.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	print_format functions[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"i", printint},
		{"d", printint},
		{"b", print_bin},
		{"x", print_hexa},
		{"X", print_hexax},
		{"o", print_oct},
		{"u", print_uns},
		{"R", printrot13},
		{"r", revstring},
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
 * fortylines - Entry point - Function to get number of characters printed.
 * @format: format string that specifies how arguments are converted for output.
 * @arguments: arguments that will replace format specifiers.
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
