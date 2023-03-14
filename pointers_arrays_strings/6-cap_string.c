#include "main.h"
/**
 * cap_string - capitalize the words in a tring
 * @s: string to capitalizw
 * descrpition: Separators of words: space, 
 * tabulation, new line, ,, ;, ., !, ?, "  (, ), {, and }"
 * return: pointer to the capitalized string
 */
{
char *s = str;

while (*s <= 'z')
{
	if (*s >= 'a')
		*s -= 32;
	s++;
}
return (s);
}
