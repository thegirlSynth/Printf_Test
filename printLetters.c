#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/* Printing a Character */

int printchar(va_list list)
{
	return (_putchar(va_arg(list, int)));
}

/* Printing a String */

int printstr(va_list list)
{
	int i, n = 0;

	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
    
  else if (*s == '\0')
    return (-1);
  

	for (i = 0; s[i] != '\0'; i++)
	{
		n += _putchar(s[i]);
	}
	return (n);
}


/* Printing a Number */

int printnum(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;
        n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
        for (; num / div > 9; )
		div *= 10;
        for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
        return (len);
}



