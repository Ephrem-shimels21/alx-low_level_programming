#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head:a pointer to a pointer to head of linked list
 * @n: new add integer
 * Return: pointer to the new add element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
