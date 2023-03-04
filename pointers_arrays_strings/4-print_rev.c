#include "main.h"
/**
 * print_rev - entry.
 * @s: string to be printed.
 * description: prints string.
 * Return: 0.
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	a++;

	while (s[a] != '\0')
		_putchar(s[a]);

	_putchar('\n');
}
