#include "lists.h"
/**
 * sum_listint - Functions that returns amount of added node in list
 * @head: pointer to first node at lists
 * Return: amount of added nodes in string
 */
int sum_listint(listint_t *head)
{
	int  add_nodes = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		add_nodes += head->n;
		head = head->next;
	}
	return (add_nodes);
}
