#include "main.h"
/**
 * reverse_array - reverses and array
 * @a: array to be reveresed
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int x, y, tmp;
	y = n - 1;
	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
