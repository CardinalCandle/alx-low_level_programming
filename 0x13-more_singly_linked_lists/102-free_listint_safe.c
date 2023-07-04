#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head.
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *t;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *hptr, *new, *add;
	listint_t *c;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (n);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		n += 1;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (n);
}
