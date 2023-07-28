#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: A pointer to the head of the list_t list to be freed.
 *
 * Description: This function frees all the nodes of a linked list
 * and the strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next; // Save the next node's address.
		free(head->str);   // Free the string inside the current node.
		free(head);        // Free the current node.
		head = temp;       // Move to the next node.
	}
}
