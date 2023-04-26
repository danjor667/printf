#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_ui - a function that print
 * an unsigned int
 * @i: input number to be printed
 * Return:  length of char printed
 */
int print_ui(unsigned int i)
{
	static unsigned int count;

	if (i / 10 != 0)
	{
		print_ui(i / 10);
	}
	count += _putchar('0' + i % 10);
	return (count);
}
