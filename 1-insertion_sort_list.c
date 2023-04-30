#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * @list: head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prev, *current, *next, *head;

	if (!list)
		return;

	
	for(head = *list; head; head = head->next)
	{
		current = head;

		while(current->next && (current->prev->n > current->n))
		{
			prev = current->prev;
			next = current->next;

			current->prev = prev->prev;
			current->next = prev;
			prev->prev = current;
			prev->next = next;
			next->prev = prev;
			print_list(*list);
		}
	}	

}
