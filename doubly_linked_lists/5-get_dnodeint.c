#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of
 * a dlistint_t linked list.
 * @head: Pointed to head of a list
 * @index:  index of the node
 * Return: Pointer to a node select
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;
	return head;
}
