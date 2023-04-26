#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_string - a function that print a string
 * and returns the length
 * @s: the string to be printed
 * Return: lenght of the printed string
 */
int print_string(char *s)
{

	if (s != NULL)
	{
		_puts(s);
		return (_strlen(s));
	}
	s = "(null)";
	_puts(s);
	return (_strlen(s));
}
