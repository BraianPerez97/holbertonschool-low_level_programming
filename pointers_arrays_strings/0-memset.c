#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @n: buffer size
 * @s: bytes of pointed memory area
 * @b: the constant byte
 * Return: pointer memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
