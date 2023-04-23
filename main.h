#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *s);
int print_char(char c);
int print_string(char *s);
int print_int(va_list arg);
int print_binary(va_list args);
int print_hexa_cap(va_list args);
int print_hexa_low(va_list args);
int print_oct(va_list args);
int print_unsigned(va_list args);
int print_rev(va_list args);
int print_rot13(va_list arg);

#endif
