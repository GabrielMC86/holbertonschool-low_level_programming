#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list
 * @h: pointer to struct
 * Return: returns number of elemrnts linked
 */
size_t list_len(const list_t *h)
{
	int idx = 0;

	while (h != NULL)
	{
		idx++;
		h = h->next;
	}
return (idx);
}
