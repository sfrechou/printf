#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void printchar(va_list list);
void printstring(va_list list);
void printpercent(va_list list);
void printint(va_list list);
void _printint(int n);
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
        void (*f)();
} print_format;

#endif
