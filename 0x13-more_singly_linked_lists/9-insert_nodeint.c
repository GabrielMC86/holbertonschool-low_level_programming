#include "lists.h"
/**
 * insert_nodeint_at_index - functions inserts a new node at a given position
 * @head: pointer at idx variable
 * @n: value of node to be inserted
 * @idx: position at variable
 * Return: new node in list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *nova_node;
	listint_t *temp_node;

	if (head == NULL)
		return (NULL);

	nova_node = malloc(sizeof(listint_t));

	if (nova_node == NULL)
		return (NULL);

	nova_node->n = n;

	if (idx == 0)
	{
		nova_node->next = *head;
		*head = nova_node;
		return (nova_node);
	}

	temp_node = *head;
	for (count = 0; count < idx - 1; count++)
	{
		temp_node = temp_node->next;

		if (temp_node == NULL)
		{
			free(nova_node);
			return (NULL);
		}
	}
	nova_node->next = temp_node->next;
	temp_node->next = nova_node;
return (nova_node);
}
