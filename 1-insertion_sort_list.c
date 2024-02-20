#include "sort.h"

/**
 * insertion_sort_list - sorting doubly linked list of integers
 * using the Insertion sort algorithm
 * @list: the linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ndd;

	if (list == NULL || (*list)->next == NULL)
		return;
	ndd = (*list)->next;
	while (ndd)
	{
		while ((ndd->prev) && (ndd->prev->k > ndd->k))
		{
			ndd = swap_ndd(ndd, list);
			print_list(*list);
		}
		ndd = ndd->next;
	}
}


/**
 *
