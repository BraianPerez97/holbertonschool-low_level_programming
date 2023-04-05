#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of list_t
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("%s\n", current->str != NULL ? current->str : "(nil)");
				current = current->next;
				count++;
	}
				
				return count;
}
