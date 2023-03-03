#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string.
 * @str: sting to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

			_purchar('\n');
}
