#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that replicate printf
 * @format: input format or specifier
 * Return: the lenght of the output
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if ( *format == '%')
		{
			switch (*(++format))
			{
				case 'c':
				{
					char c = va_arg(args, int);
					count += print_char(c);
					break;
				}
				case 's':
				{
					char* s = va_arg(args, char*);
					count += print_string(s);
					break;
				}
				case '%':
				{
					_putchar('%');
					count += 1;
					break;
				}
				case 'd':
				case 'i':
				{
					int i = va_arg(args, int);
					count += print_int(i);
					break;
				}
				case 'b':
				{
					unsigned int i = va_arg(args, unsigned int);
					count += print_binary(i);
					break;
				}

								     
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
