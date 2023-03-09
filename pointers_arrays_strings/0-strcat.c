#include "main.h"
/**
 * *_strcat - entry
 * Description:
 * @dest: string
 * @src: string
 * Return: pointer of dest.
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
	}
	return (dest);
}

