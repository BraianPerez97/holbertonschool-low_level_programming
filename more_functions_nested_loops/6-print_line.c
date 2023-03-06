#include "main.h"
/**
 * print_line - draw a line
 * @n: number of times printed
 * description: print a straight line
 */
void print_line(int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
