#include "lists.h"
/**
 * print_listint - Preints all elements of list
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int counter;

	counter = 0;
	while (h != NULL)
	{
		if (h == NULL)
			return (0);

		else
		{
			printf("%i\n", h->n);
		}
		counter++;
		h = h->next;
	}
return (counter);
}
