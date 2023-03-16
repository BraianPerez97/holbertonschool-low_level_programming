#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: source
 * @dest: destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dst = dest;

	while (n--)
		*dst++ = *src++;
	return (dest);
}
