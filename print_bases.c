/* Print hexa small */

#include "main.h"

int hexa(unsigned int n, int *ptr);

int printhexa(va_list list) {
  unsigned int n;
  int count = 0;

  n = va_arg(list, unsigned int);

  hexa(n, &count);

  return (count);
}

int hexa(unsigned int n, int *ptr) {
  unsigned int c;
 // char num[] = "0123456789abcdef";

  
  (*ptr)++;
  if (n / 16 > 0) {
    hexa(n / 16, ptr);
  }

  c = (n % 16);

  if (c > 9 && c < 16)
  {
    c -= 10;
    _putchar(c + 'a');
  }
  
  
  /* Print HEXA capital*/
  
  #include "main.h"

int HEXA(unsigned int n, int *ptr);

int printHEXA(va_list list) {
  unsigned int n;
  int count = 0;

  n = va_arg(list, unsigned int);

  HEXA(n, &count);

  return (count);
}

int HEXA(unsigned int n, int *ptr) {

  // int c, i;
  // char num[] = "0123456789ABCDEF";
  
  // (*ptr)++;
  // if (n / 16 > 0) {
  //   HEXA(n / 16, ptr);
  // }

  // c = (n % 16);
  // _putchar(num[c]);

  // return (*ptr);


  
 unsigned int c;

  
  (*ptr)++;
  if (n / 16 > 0) {
    hexa(n / 16, ptr);
  }

  c = (n % 16);

  if (c > 9 && c < 16)
  {
    c -= 10;
    _putchar(c + 'A');
  }

  else
    _putchar(c + '0');
  return (*ptr);
  

}
  
  /* Print Octal */
  
  #include "main.h"

int octal(unsigned int n, int *ptr);

int printoctal(va_list list)
{
  unsigned int n;
  int count = 0;

  n = va_arg(list, unsigned int);
  

  octal(n, &count);

  return (count);
}


int octal(unsigned int n, int *ptr)
{
	char c;
  
(*ptr)++;
	if (n / 8 > 0)
	{
		octal(n / 8, ptr);
	}
	c = (n % 8) + '0';
 _putchar(c);
  
	return (*ptr);
}
  
  /* Print Unsigned */
  
  
  int printunsigned(va_list args) {
  unsigned int n;
  unsigned int div;
  unsigned int len;
  unsigned int num;
  n = va_arg(args, unsigned int);
  div = 1;
  len = 0;

  num = n;
  for (; num / div > 9;)
    div *= 10;
  for (; div != 0;) {
    len += _putchar('0' + num / div);
    num %= div;
    div /= 10;
  }
  return (len);
}
