#include "main.h"
/**
 * print_alphabet_x10 - entry
 *
 * description - print alphabet 10 times
 * return - void
 */
int main(void)
{
print_alphabet_x10();
int a;
for (a = 1; a <= 10; a++)
{
char b = 'a';
while (b <= 'z')
{
_putchar(b);
b++;
}
_putchar('\n');
}
return(0);
}
