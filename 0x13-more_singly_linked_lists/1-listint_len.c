#include "lists.h"

/**
 * listint_len - return the number of elments in a linked list
 * @h: pointer to the linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
