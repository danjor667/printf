#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_hexa_low - a functio that print the
 * hexadecimal representeion of an num
 * @i: input number( to be converted)
 * Return: int, number of char printed
 */
int print_hexa_low(unsigned int i)
{
	int count = 0;
	int j = 0;
	char hexa[] = "0123456789abcdef";
	char buffer[8];
	int k;

	while (i > 0)
	{
		buffer[j] = hexa[i % 16];
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
