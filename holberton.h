#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct gen_format - Struct op base
 * @caracter: The operator
 * @f: The function associated
 */
typedef struct gen_format
{
	char *caracter;
	int (*f)();
} print_format;

int printchar(va_list list);
int printstring(va_list list);
int printpercent(va_list list);
int printint(va_list list);
int print_bin(va_list list);
int print_hexa(va_list list);
int print_hexax(va_list list);
int print_oct(va_list list);
int print_uns(va_list list);
int printrot13(va_list list);
int revstring(va_list list);
int printnon_printable(va_list arguments);
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int fortylines(const char *, va_list, print_format *);

#endif
