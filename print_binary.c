#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_binary - a function to print the binary representatio
 * of a deciml number
 * @i: decimal input
 * Return: number of digits of binary
 */
int print_binary(unsigned int i)
{
	unsigned int count = 0;

	if (i < 2)
	{
		_putchar('0' + i);
		count++;
	}
	else
	{
		count += print_binary(i / 2);
		_putchar('0' + i % 2);
		count++;
	}
	return (count);
}
