#include "main.h"
#include <stdio.h>
/**
*print_to_98- Entry
*@n: input
*Description: prints all
*numbers from n to 98.
*Return: 0
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
putchar('\n');
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
putchar('\n');
}
return;
}
