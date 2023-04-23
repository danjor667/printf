#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 */
int print_string(char *s)
{

	if (s != NULL)
	{
		_puts(s);
		return (_strlen(s));
	}
	else
	{
		return(0);
	}
}
