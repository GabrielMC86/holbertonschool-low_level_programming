#include "lists.h"
/**
 * print_list - Prints all the elements of a list
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int idx;


	idx = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		idx++;
		h = h->next;
	}
return (idx);
}
