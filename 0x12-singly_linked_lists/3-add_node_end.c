#include "lists.h"
/**
 * add_node_end - add element at the end
 * @head: head
 * @str: string
 * Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *t;

	if (new == NULL)
	{
		return (NULL);
	}
	new->len = strlen(str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		t = *head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = new;
	}
	return (new);
}
