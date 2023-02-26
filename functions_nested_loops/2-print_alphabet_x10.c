#include "main.h"
/**
 * print_alphabet_x10 - print 1- times
 *
 * description - print alphabet 10 times
 * return - void
 */
void print_alphabet_10x(void)
{
	int a;
	for (a = 1; a <=10; a++)
	{
		char b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
	}
	return;
}
