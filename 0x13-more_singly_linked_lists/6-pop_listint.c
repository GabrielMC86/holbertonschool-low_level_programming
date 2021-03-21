#include "lists.h"
/**
 * pop_listint - remove head node in list
 * @head: pointer to struct
 * Return: deleted node *
 */
int pop_listint(listint_t **head)
{
	listint_t *to_Delete;
	int data;


	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		to_Delete = *head;
		data = to_Delete->n;
		*head = to_Delete->next;

		free(to_Delete);
	}
return (data);
}
