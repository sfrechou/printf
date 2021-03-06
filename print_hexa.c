#include "holberton.h"

/**
 * print_hexa - Entry point - Function that prints hexadecimals (uppercase).
 * @arguments: number that will be converted to hexadecimal.
 * Return: number of characters printed.
 */
int print_hexa(va_list arguments)
{
	unsigned int n, quotient;
	int remainder, digitos = 0;
	int i, j = 0, bytes = 0;
	char array[100];

	n = va_arg(arguments, int);
	if (n == 0)
	{
		_putchar('0');
		bytes++;
		return (bytes);
	}
	quotient = n;
	while ((n / 10) != 0)
	{
		digitos++;
		n /= 10;
	}
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
		{
			bytes++;
			array[j++] = 48 + remainder;
		}
		else
		{
			bytes++;
			array[j++] = 87 + remainder;
		}
		quotient = quotient / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}
	return (bytes);
}

/**
 * print_hexax - Entry point - Function that prints hexadecimals (lowercase).
 * @arguments: number that will be converted to hexadecimal.
 * Return: number of characters printed.
 */
int print_hexax(va_list arguments)
{
	unsigned int n, quotient;
	int remainder, digitos = 0;
	int i, j = 0, bytes = 0;
	char array[100];

	n = va_arg(arguments, int);
	if (n == 0)
	{
		_putchar('0');
		bytes++;
		return (bytes);
	}
	quotient = n;
	while ((n / 10) != 0)
	{
		digitos++;
		n /= 10;
	}
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
		{
			bytes++;
			array[j++] = 48 + remainder;
		}
		else
		{
			bytes++;
			array[j++] = 55 + remainder;
		}
		quotient = quotient / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(array[i]);
	}
	return (bytes);
}


/**
 * print_oct - Entry point - Function that prints octal numbers.
 * @arguments: number that will be converted to octal numbers.
 * Return: number of characters printed.
 */
int print_oct(va_list arguments)
{
	int i, j, power = 1, pwr = 1, bytes = 0, new;
	unsigned int n, oct = 0;

	n = va_arg(arguments, int);
	while (n > 0)
	{
		oct += (n % 8) * power;
		n /= 8;
		power *= 8;
		bytes++;
	}
	for (i = 1; i <= bytes; i++)
	{
		pwr = 1;
		for (j = i; j < bytes; j++)
		{
			pwr *= 8;
		}
		new = oct / pwr;
		oct = oct - (new * pwr);
		_putchar(new + '0');
	}
	return (bytes);
}

/**
 * print_uns - Entry point - Function that prints unsigned integers.
 * @arguments: number that will be "converted" to unsigned int.
 * Return: number of characters printed.
 */
int print_uns(va_list arguments)
{
	int i, j, digitos = 0, power, huevo = 0;
	unsigned int a, n;

	n = va_arg(arguments, int);
	a = n;
	while ((a / 10) != 0)
	{
		digitos++;
		a /= 10;
	}
	for (i = 1; i <= digitos; i++)
	{
		power = 1;
		for (j = i - 1; j < digitos; j++)
		{
			power = power * 10;
		}
		huevo = n / power;
		n = n - (huevo * power);
		_putchar(huevo + '0');
	}
	_putchar(n + '0');
	return (digitos + 1);
}
