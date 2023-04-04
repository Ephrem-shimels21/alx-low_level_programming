#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add a node at the end
 * @head: a pointer to a pointer to the head linked list
 * @n: a new integer that is going to added at the en
 * Return: pointeer to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	
	listint_t *new,*temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	new->n = n;
	new->next = NULL;

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
