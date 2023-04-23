#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 *
 *
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
					print_char(c);
					break;
				}
				case 's':
				{
					char* s = va_arg(args, char*);
					print_string(s);
					break;
				}
				case '%':
				{
					_putchar('%');
					count += 1;
					break;
				}
				case 'd' || 'i':
				{
					int i = va_arg(args, int)
					/* print_int function*/
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
