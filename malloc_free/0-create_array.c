#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * with a specific char
 * @size: value of lenght to set on memory
 * @c: char to store on memory
 *
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
