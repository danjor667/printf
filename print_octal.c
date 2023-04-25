#include <stdarg.h>
#include "main.h"
/**
 * print_octal - function to print the octal
 * representation of a decimal num
 * @i: input decimal number
 * Return: the num of digit printed
 */
int print_octal(unsigned int i)
{
	unsigned int count = 0;

	if (i < 8)
	{
		_putchar('0' + i);
		count += 1;
	}
	else
	{
		count += print_octal(i / 8);
		_putchar('0' + i % 8);
		count++;
	}
	return (count);
}
