#include "lists.h"
/**
 * add_node - function that adds node
 * @head: head of the list
 * @str: String of the instance
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	} 
	else
	{
		return (NULL);
	}
	*head = new_node;
	
	return (new_node);
}
