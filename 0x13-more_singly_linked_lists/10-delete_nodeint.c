#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer at index
 * @index: the index node that should be deleted
 * Return: 1 if success || -1 on error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *linker;
	listint_t *temp;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (count = 0; temp != NULL && count < index - 1; count++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);


	linker = temp->next->next;
	free(temp->next);
	temp->next = linker;

return (1);
}
