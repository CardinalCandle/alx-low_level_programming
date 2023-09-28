#include "lists.h"
/**
 * list_len - returns the length of the list
 * @h: linked list
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
