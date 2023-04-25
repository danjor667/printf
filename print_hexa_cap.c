#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_hexa_cap - a function that print
 * the hexa decimal equivilnt of a num
 * @i: input number
 * Return: int, number of char printed
 */
int print_hexa_cap(unsigned int i)
{
	int count = 0;
	char hex[] = "0123456789ABCDEF";
	char buffer[8];
	int j = 0;
	int k;

	while (i > 0)
	{
		buffer[j] = hex[i % 16];
		i /= 16;
		j++;
	}
	j--;
	k = j;
	for (k = j; k >= 0; k--)
	{
		_putchar(buffer[k]);
		count++;
	}
	return (count);
}
