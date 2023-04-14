#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: is a pointer to the first node of doubly linked list
 * @n: data that should be stored in the new node
 * Return: the address of the new element, NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
