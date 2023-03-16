#include "main.h"
/**
 * _strstr - searches a for a substring 
 * @haystack: string to search
 * @needle: sub string to a search for
 *
 * return: pointer to a byte at the start of substring
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hayptr, *ndlptr;

	while (*haystack != 0)
	{
		hayptr = haystack;
		ndlptr = needle;
		if (*ndlptr == 0)
			return (haystack); 
		while (*hayptr != 0)
		{
			if (*hayptr != *ndlptr)
				break;
			hayptr++;
			ndlptr++;
			if (*ndlptr == 0)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
