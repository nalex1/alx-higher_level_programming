#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if there is a cycle in a singly linked list
 * @list: list pointer
 * Return: 1 if cycle found, 0 otherwise
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t * fast = list;
	
	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
