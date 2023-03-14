#include "main.h"
/**
 * cap_string - capitalize the words in a tring
 * @s: string to capitalizw
 * descrpition: Separators of words: space, 
 * tabulation, new line, ,, ;, ., !, ?, "  (, ), {, and }"
 * return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	char *ws = " \t\n,;.!?\"(){}";
	int a;
	int b;

for (a = 0; b = 0; s[a]; ++a);
{
if ('a' <= s[a] && s[a] <= 'z')
{
if (a)
{
for (b = 0; ws[b] && ws[b] != s[a -1]; ++b)
;
}
if (ws[b])
s[a] -= ('a' - 'A');
}
}
return (s);
}
