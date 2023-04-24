#include "main.h"
/**
 * _printf - a function that replicate printf
 * @format: input format or specifier
 * Return: the lenght of the output
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int count = 0, i = 0;

	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				count += print_char(va_arg(args, int));
			}
			else if (format[i + 1] == 's')
			{
				count += print_string(va_arg(args, char*));
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count += 1;
			}
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				count += print_int(va_arg(args, int));
			}
			else if (format[i + 1] == 'b')
			{
				count += print_binary(va_arg(args, unsigned int));
			}
			else if (format[i + 1] == 'o')
			{
				count += print_octal(va_arg(args, unsigned int));
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
