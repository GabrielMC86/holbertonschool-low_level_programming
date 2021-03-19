#include "lists.h"
/**
 * add_node_end - functions that adds a new node
 * @head: node at start of link
 * @str: pointer to linked string
 * Return: address of new element or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *lnode;

	if (str == NULL)
	{
		return (NULL);
	}
	if (strdup(str) == NULL)
		return (NULL);

	copy = malloc(sizeof(list_t));

	if (copy == NULL)
		return (NULL);

	copy->str = strdup(str);
	copy->len = _strlen(str);
	copy->next = NULL;

	if (*head == NULL)
	{
		*head = copy;
	}
	else
	{
		lnode = *head;
		while (lnode->next != NULL)
		{
		lnode = lnode->next;
		}
	}
		lnode->next = copy;

	return (lnode);
}
/**
 * _strlen - gives out the lenght of string
 * @s: variable
 * Return: 0
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
