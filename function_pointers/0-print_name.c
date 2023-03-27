#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to functon that prints a name
 * return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
