#include "hash_tables.h"
#include <stddef.h>
/**
 * has_table_create - creats a hash table 
 * @size: is the array size
 * Return: a pointer to a new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (!new_table)
			return (NULL);
		new_table->size = size;
		new_table->array = malloc(sizeof(char *) * size);
		if (!new_table->array)
			return (NULL);
	}

	return (new_table);
}
