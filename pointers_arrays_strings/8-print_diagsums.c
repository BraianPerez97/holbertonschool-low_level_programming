#include <stdio.h>
#include "main.h"
/**
 * print_diagsum - entry
 * @size: array size
 * @a: parameter of array.
 * description: prints sums of diagonals
 * return: void
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int sum1 = 0;
int sum2 = 0;

for (; i < size; i++)
sum1 += a[i * size + i];

for (i = 1; i <= size; i++)
sum2 += a[i * size - i];

printf("%d, %d\n", sum1, sum2);
}
