#include "lists.h"
/**
 * add_nodeint_end - Adds node at end of lists
 * @head: pointer to first node
 * @n: values inside lists
 * Return: strings with added new node at end of list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *copy;
	listint_t *lnode;

	if (head == NULL)
		return (NULL);

	copy = malloc(sizeof(listint_t));

	if (copy == NULL)
		return (NULL);

	copy->next = NULL;
	copy->n = n;

	if (*head == NULL)
	{
		*head = copy;
		return (copy);
	}
	else
	{
		lnode = *head;
		while (lnode->next != NULL)
		{
			lnode = lnode->next;
		}
	}
	lnode->next = copy;

	return (copy);
}
