#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int printchar(va_list list);
int printstring(va_list list);
int printpercent(va_list list);
int printint(va_list list);
int _printint(int bytes, int n);
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);

/**
 * struct gen_format - Struct op
 *
 * @caracter: The operator
 * @f: The function associated
 */
typedef struct gen_format
{
	char *caracter;
	int (*f)();
} print_format;

#endif
