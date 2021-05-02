#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (!head)
		return;

	while(head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
