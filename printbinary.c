#include "main.h"

int binary(unsigned int n, int *ptr);

int printbinary(va_list list)
{
  unsigned int n;
  int count = 0;

  n = va_arg(list, unsigned int);
  

  binary(n, &count);

  return (count);
}


int binary(unsigned int n, int *ptr)
{
	char c;

	(*ptr)++;
	if (n / 2 > 0)
	{
		binary(n / 2, ptr);
	}
	c = (n % 2) + '0';
	_putchar(c);
	return (*ptr);
}
