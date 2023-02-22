#include <stdio.h>
/**
*main - Entry.
*
*Description: prints all single digits of base 10.
*Return: Always 0.
*/

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
