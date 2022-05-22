#ifndef MAIN_H__INCLUDED
#define MAIN_H__INCLUDED

#include <stdarg.h>
#include <stddef.h>

int print_str(char *c);
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int num);


#define va_int va_arg(ap, int)
#define va_char va_arg(ap, char *)
#endif
