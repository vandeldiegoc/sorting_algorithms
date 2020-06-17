#include "sort.h"

/**
 * insertion_sort_list - sort nodes
 * @list: head nodes
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *swap = NULL, *ptr = NULL;

	if (list == NULL || *list == NULL)
		return;

	swap = (*list)->next;

	while (swap)
	{
		while (swap->prev != NULL && swap->n < swap->prev->n)
		{
			ptr = swap->prev;
			ptr->next = swap->next;
			if (ptr->next != NULL)
				ptr->next->prev = ptr;
			swap->next = ptr;
			swap->prev = ptr->prev;
			ptr->prev = swap;

			if (swap->prev == NULL)
				*list = swap;
			else
				swap->prev->next = swap;
			print_list(*list);
		}
		swap = swap->next;
	}
}
