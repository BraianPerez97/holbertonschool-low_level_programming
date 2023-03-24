#include "dog.h"
#include <stdio.h>
/*
 * print_dog - prints a struct dog
 * @d: variable pointing to struct dog to print elements.
 */
void print_dog(struct dog *d)
{ if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->age);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
