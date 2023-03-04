#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string.
 * @str: sting to be printed.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
			_purchar('\n');
}
