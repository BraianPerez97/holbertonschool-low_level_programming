#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list
 * @head: Is a first structure of a linked list
 * @n: number to set field n in the new node.
 *
 * Return: pointer to a new add note
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;

	new_node->prev = tmp;
	tmp->next = new_node;

	return (new_node);
}
