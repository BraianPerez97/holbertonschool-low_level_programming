#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on element of an array
 * @array: point to array of interger
 * @size: lenght of array input
 * @action: pointer to funtion that prints element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action && array)
	{
		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
