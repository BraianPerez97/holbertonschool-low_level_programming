#include "main.h"
/*
 * _strncat - entry
 * description: concatenate strings 
 * @src: string
 * @dest: string
 * Return: result of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int *strncat(char *dest, char *src, int n)
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
