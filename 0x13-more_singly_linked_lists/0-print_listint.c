#include "lists.h"

/**
 * print_listint - prints all elements of a list.
 * @h: head.
 * Return: # of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n  += 1;
	}
	return (n);
}
