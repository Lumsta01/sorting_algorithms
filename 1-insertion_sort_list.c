#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list integers in ascending order
 * @list: list of integers
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *compare;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		compare = current->prev;

		while (compare != NULL && compare->n > current->n)
		{
			swap_nodes(list, compare, current);
			print_list(*list);
			compare = current->prev;
		}

		current = current->next;
	}
}

/**
 * swap_nodes - swap 2 elements a list
 * @list: list of intergers
 * @node1: pointer to first node
 * @node2: pointer to second noide
 *Return: void
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1 == NULL || node2 == NULL)
		return;

	if (node->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node->next != NULL)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node1;
}
