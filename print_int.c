#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_int - a function that print integers
 * @i: the interger to print
 * Return: number of digit printed
 */
int print_int(int i)
{
	int len;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	len = print_int_helper(i);
	return (len);
}
/*creating the helper funct*/
/**
 * print_int_helper - print_int helper
 * @i: integer to print
 * Return: int
 */
int print_int_helper(int i)
{
	if (i <  0)
	{
		_putchar('-');
		i *= -1;
	}
	if (i / 10 != 0)
	{
		print_int_helper(i / 10);
	}
	_putchar ('0' + (i % 10));
	return (1);
}
