#include "main.h"
/**
 * print_alphabet_x10 - entry
 *
 * description - print alphabet 10 times
 * return - void
 */
void print_alphabet_x10(void)
{
int a;
for (a = 1; a <= 10; a++)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
return;
}
