#include "function_pointers.h"
/**
 * int_index - function that searches for an interger
 * @array: pointer array of interger
 * @size: lenght of input array
 * @cmp: point to function that compares the numbers
 * Return: position of interger on array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp ++ void)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
