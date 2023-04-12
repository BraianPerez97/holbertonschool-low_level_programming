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

/**
 * _strnlen_recursion - return the length of a string.
 * @s: string
 * Return: lenght of @s
 */
int _strnlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strnlen_recursion(s + 1));
}
