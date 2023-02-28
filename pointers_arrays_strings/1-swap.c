#include "main.h"
/**
 * swap_int - entry
 * @a: int to be swap
 * @b: int to be swap
 * Description: swap value of to integers.
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
