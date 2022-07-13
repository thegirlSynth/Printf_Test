#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...) {
  va_list list;
  int val, j, i = 0, n = 0;

  print printype[] = {{"c", printchar}, {"s", printstr},    {"d", printnum},
                      {"i", printnum},  {"b", printbinary}, {NULL, NULL}};

  va_start(list, format);
  if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
    return (-1);

  while (format[i] != '\0') {
    if (format[i] == '%') {

      for (j = 0; printype[j].t; j++) {
        if (printype[j].t != NULL) {
          if (printype[j].t[0] == format[i + 1]) {
            val = printype[j].f(list);
            n += val;
            break;
          }
        }
      }

      if (format[i + 1] == '%') {
        n += _putchar('%');
      }

      else if (val == 0) {
        n += _putchar(format[i]);
        n += _putchar(format[i + 1]);
      }

      i++;
    }

    else {
      n += _putchar(format[i]);
    }
    i++;
  }
  va_end(list);
  return (n);
}
