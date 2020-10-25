#ifndef PRINT_H
#define PRINT_H

#include <unistd.h>

int _putchar(char c);
void _printf(const char * const format, ...);

/**
 * struct gen_format - Struct op
 *
 * @caracter: The operator
 * @f: The function associated
 */
typedef struct gen_format
{
        char *caracter;
        void (*f)();
} print_format;

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - Entry point
 * @s: d
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int length;
	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

#endif
