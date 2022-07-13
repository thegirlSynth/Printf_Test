#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
  ui = (unsigned int)INT_MAX + 1024; 
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
  _printf("The binary digit of %i is: %b\n", 98, 98);
 
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");


  /* More Test CAses */

     _printf("%H, %H\n", -1, 1);
  
   _printf("%0, %%0\n");
  
  
    _printf("1024, %d\n", 1024);
   printf("1024, %d\n", 1024);
    _printf("-1024, %d\n", -1024);
  printf("-1024, %d\n", -1024);

  
    printf("1024, %i\n", 1024);
  _printf("1024, %i\n", 1024);
    printf("-1024, %i\n", -1024);
  _printf("-1024, %i\n", -1024);
  /*
    result |= test(187, "1024", "%u", 1024);
    result |= test(188, "4294966272", "%u", 4294966272U);
    result |= test(189, "777", "%o", 511);
    result |= test(190, "37777777001", "%o", 4294966785U);
    result |= test(191, "1234abcd", "%x", 305441741);
    result |= test(192, "edcb5433", "%x", 3989525555U);
    result |= test(193, "1234ABCD", "%X", 305441741);
    result |= test(194, "EDCB5433", "%X", 3989525555U);
    result |= test(195, "x", "%c", 'x');
    result |= test(196, "%", "%%");
    result |= test(197, "Hallo heimur", "%+s", "Hallo heimur");
    result |= test(198, "+1024", "%+d", 1024);
    result |= test(199, "-1024", "%+d", -1024);
    result |= test(200, "+1024", "%+i", 1024);
    result |= test(201, "-1024", "%+i", -1024);
    result |= test(202, "1024", "%+u", 1024);
    result |= test(203, "4294966272", "%+u", 4294966272U);
    result |= test(204, "777", "%+o", 511);
    result |= test(205, "37777777001", "%+o", 4294966785U);
    result |= test(206, "1234abcd", "%+x", 305441741);
    result |= test(207, "edcb5433", "%+x", 3989525555U);
    result |= test(208, "1234ABCD", "%+X", 305441741);
    result |= test(209, "EDCB5433", "%+X", 3989525555U);
    result |= test(210, "x", "%+c", 'x');
    result |= test(211, "Hallo heimur", "% s", "Hallo heimur");
    result |= test(212, " 1024", "% d", 1024);
    result |= test(213, "-1024", "% d", -1024);
    result |= test(214, " 1024", "% i", 1024);
    result |= test(215, "-1024", "% i", -1024);
    result |= test(216, "1024", "% u", 1024);
    result |= test(217, "4294966272", "% u", 4294966272U);
    result |= test(218, "777", "% o", 511);*/
    return (0);
}
