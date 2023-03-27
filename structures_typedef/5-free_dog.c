#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dogs- free struct mem
 * @d: mem to be free
 * Return: free memory
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
