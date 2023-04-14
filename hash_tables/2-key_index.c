#include "hash_tables.h"
/**
 * key_index - gives key index
 * @key: value
 * @size: size of array
 * Return: index and size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = 0;

	index = hash_djb2((unsigned char *) key);
		return (index % size);
}
