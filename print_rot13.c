#include "main.h"
/**
 * print_rot13 - replaces each alphabets of a string
 * @s: string to be deciphered
 * Return: integer
 */
int print_rot13(char *s)
{
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int x = 0;
	unsigned int y;
	int count = 0;

	if (s == NULL)
		s = "(null)";
	while (s[x] != '\0')
	{
		y = 0;
		while (input[y] != '\0')
		{
			if (input[y] == s[x])
			{
				_putchar(output[y]);
				count++;
				break;
			}
			y++;
		}
		if (!input[y])
		{
			_putchar(s[x]);
			count++;
		}
		x++;
	}
	return (count);
}
