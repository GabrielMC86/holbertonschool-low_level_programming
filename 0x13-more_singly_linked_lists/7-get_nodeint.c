#include "lists.h"
/**
 * get_nodeint_at_index - functions that returns specific element at list
 * @head: pointer at index
 * @index: elements at list
 * Return: 0 on success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	count = 0;
	while (count < index && head != NULL)
	{
		count++;
		head = head->next;
	}	
	if (count == index)
		return (head);

return (0);
}
