#include "lists.h"
/**
 * listint_len - Function that returns the number of elements
 *@h: pointer variable to struct
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		idx++;
		h = h->next;
	}
return (idx);
}
