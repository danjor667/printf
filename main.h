#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
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
int print_octal(unsigned int i);
int print_ui(unsigned int i);
int print_rev(char *s);
int print_rot13(char *s);
int print_int_helper(int i);
int print_intv2(int i);


#endif
