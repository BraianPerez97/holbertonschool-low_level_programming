#include "main.h"
/**
 * string_tpupper - changes all lowercase letters
 * @s: sting 
 * return: uppercase
 */
char *string_toupper(char *s)
	{
		int x = 0;
		while (*(s + x))
	{
		if ((*(s + x) >= 97) && (*(s + x) <= 122))
			*(s + x) = *(s + x) - 32;
		x++
	}
		return (s);
	}
