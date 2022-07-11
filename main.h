#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct specify - a function for conversion specifiers
 * and their corresponding functions.
 * @symbol: The specifier
 * @func: the corresponding function.
 */

struct specify
{
	char *symbol;
	int (*func)(va_list);
};

typedef struct specify specified;


#endif

