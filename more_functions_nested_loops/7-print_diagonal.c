#include "main.h"
/**
 * print_diagonal - diagonal line
 * @n: number of times '\' is printed
 * description: print diagonal line.
 */
void print_diagonal(int n)
{
int x, y;

x = 0;

while (n > 0)
{
y = x;
while (y > 0)
{
_putchar(' ');
y--;
}
_putchar('\\');
_puthcar('\n');
x++;
n--;
}
if (x < 1)
_putchar('\n')
}
