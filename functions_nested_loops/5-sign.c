#include "main.h"
/**
*print_sign - Entry
*@n: input
*Description: checks if num positive,
*zero or negative
*Return: 0.
*/
int print_sign(int n)
{
char x;
if (n >= 1)
{
x = '+';
_putchar(x);
return (1);
}
else if (n == 0)
{
x = '0';
_putchar(x);
return (0);
}
else if (n < 0)
{
x = '-';
_putchar(x);
return (1);
}
return (n);
}
