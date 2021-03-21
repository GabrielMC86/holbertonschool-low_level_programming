#include "lists.h"
/**
 * free_listint2 - function that frees listint_t
 * @head: pointer to struct
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
