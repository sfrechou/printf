#include "holberton.h"
int _putchar(char c);
/**
 * _printf - Entry point
 * @format: s
 *
 * Return: Always 0 (Success)
 */
void _printf(const char * const format, ...)
{
	print_format functions[] = {
		{"c", printchar},
		{"s", printstring},
		{"%", printpercent},
		{"i", printint},
		{"d", printdecimal},
		{NULL, NULL}
	};
	int i, j, flag = 0;
	va_list arguments;

	va_start(arguments, format);
	i = 0;

	while (format[i] != '\0')
	{
		flag = 0;
		if (format[i] == '%')
		{
			while(functions[j].caracter != NULL)
			{
				if(format[i + 1] == functions[j].caracter[0])
				{
					flag = 1;
					functions[j].f(arguments);
					break;
				}
				j++;
			}
		}

		if (flag == 1)
		{
			if (format[i + 1] == '\0' || format[i + 2] == '\0')
				break;
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
		j = 0;
	}
	va_end(arguments);
}
