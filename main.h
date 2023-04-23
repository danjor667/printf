#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *s);
int print_char(char c);
int print_string(char *s);
int print_int(int i);
int print_binary(unsigned int i);
int print_hexa_cap(unsigned int i);
int print_hexa_low(unsigned int i);
int print_oct(unsigned int i);
int print_unsigned(unsigned int i);
int print_rev(char *s);
int print_rot13(char *s);
int print_int_helper(int i);

#endif
