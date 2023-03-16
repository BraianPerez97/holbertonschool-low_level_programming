#include "main.h"
/**
 * _strpbrk - return pointer to first occurrence in the string s
 *
 * @s: string to search
 * @accept: charachter to look for
 *
 * return: pointer to first occurrence of accept.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;
		if (*ptr == 0)
		{
			ptr = accept;
			s++;
		}
	}
	return (0);
}
