#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: amount of bytes to store on memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr - malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return *ptr;
}
