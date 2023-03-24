#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to character array used to fill name
 * @age: pointer to character array used to fill age
 * @owner: pointer to character array used to fill name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
