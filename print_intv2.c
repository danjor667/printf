#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_intv2 - function to print
 * an int
 * @i: input int
 * Return: int number of char printed
 */
int print_intv2(int i)
{
	char buffer[32];
	int j = 0;
	int count = 0;
	int k;

	if (i == 0)
	{
		count += _putchar('0' + 0);
		return (count);
	}
	if (i < 0)
	{
		count += _putchar('-');
		i *= -1;
	}
	while (i != 0)
	{
		buffer[j] = i % 10;
		i /= 10;
		j++;
	}
	j--;
	k = j;
	for (k = j; k >= 0; k--)
	{
		_putchar('0' + buffer[k]);
		count++;
	}
	return (count);
}


