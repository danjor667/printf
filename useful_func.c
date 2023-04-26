#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _putchar - func to print a character
 * @c: character to print
 * Return: Always 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - funct to calculate the lenght of a string
 * @s: input string
 * Return: int len of string
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * _puts - func to print a string
 * @s: the string to be printed
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
