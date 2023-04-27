#include "lists.h"
/**
 * list_len - returns the # of elements
 * @h: linked list
 * Return: count
 */
size_t list_len(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
	{
		h = h->next;
                count++;
        }
	return (count);
}
