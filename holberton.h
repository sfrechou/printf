#ifndef PRINT_H
#define PRINT_H

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

#endif
