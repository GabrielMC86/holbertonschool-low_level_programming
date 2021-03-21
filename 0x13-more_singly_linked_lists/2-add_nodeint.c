#include "lists.h"
/**
 * add_nodeint - functions that adds a new node at the beginning of list
 *@head: points at head of structure linked lists
 *@n: values of linked list
 * Return: address of the new element or NULL if its fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *copy;

	if (head == NULL)
		return (NULL);

	copy = malloc(sizeof(listint_t));

	if (copy == NULL)
		copy->next = NULL;

	copy->n = n;
	copy->next = *head;
	*head = copy;

return (copy);
}
