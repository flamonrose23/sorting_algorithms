#include "sort.h"

/**
 * insertion_sort_list - sorting doubly linked list of integers
 * using Insertion sort algorithm
 * @list: The list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *prev;

	if (!(*list) || !((*list)->next))
		return;

	curr = (*list)->next;
	while (curr)
	{
		prev = curr->prev;
		while (prev && prev->x > curr->x)
		{
			if (prev->prev)
				prev->prev->next = curr;
			if (curr->next)
				curr->next->prev = prev;
			prev->next = curr->next;
			curr->prev = prev->prev;
			prev->prev = curr;
			curr->next = prev;

			prev = curr->prev;
			if (!prev)
				*list = curr;
			print_list(*list);
		}
		curr = curr->next;
	}
}
