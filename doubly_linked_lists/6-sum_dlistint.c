#include "lists.h"
/**
 * sum_dlistint - return sum of all data (n) of dlistint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all data in list or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
