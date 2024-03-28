#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - a function to insert a node in a sorted list
 * @head: sorted list address
 * @number: a number to insert to the list
 * Return: inserted number address
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *list_cpy = *head;
	listint_t *new_node = NULL;
	listint_t *last_node = NULL;

	if (head == NULL || *head == NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = number;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	while (list_cpy != NULL && list_cpy->n < number)
	{
		last_node = list_cpy;
		list_cpy = list_cpy->next;
	}
	if (last_node == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
