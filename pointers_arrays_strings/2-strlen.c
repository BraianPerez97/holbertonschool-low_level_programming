#include "main.h"
/**
 * _strlen -gets length of string.
 *
 * @s: pointer
 * Description: return length of a string.
 * Return: length of string.
 */

int _strlen(char *s)
{
int a;

a = 0;

while (*s != '\0')
{
a++;
s++;
}
return (a);
}
