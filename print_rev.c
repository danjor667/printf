#include "main.h"
/**
 * print_rev - reverse inputed string parameter value
 * @s: input string parameter(array char)
 * Return: integer representing length or num
 * of char printed
 */
int print_rev(char *s)
{
	int x = 0, count = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			s++;
			x += 1;
		}
		s--;
		while (x > 0)
		{
			_putchar(*s);
			s--;
			x -= 1;
			count += 1;
		}
		return (count);
	}
	s = "(null)";
	_puts(s);
	return (_strlen(s));
}
