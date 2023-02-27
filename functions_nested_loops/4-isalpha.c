#include "main.h"
/**
*_isalpha - Entry
*@c: input
*Description: check lowercase characters.
*Return: ()
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
