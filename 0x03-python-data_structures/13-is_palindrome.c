#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_length - a function that returns the length of a list
 * @head: the list head address
 * Return: length of the list
 */

int list_length(listint_t **head)
{
	int len = 0;
	listint_t *list_cpy = *head;

	if (head == NULL || *head == NULL)
		return (0);
	while (list_cpy != NULL)
	{
		len += 1;
		list_cpy = list_cpy->next;
	}
	return (len);
}

/**
 * rev_list - a function that reverses a linked list
 * @head: address of the list to reverse
 * Return: reversed list
 */

listint_t *rev_list(listint_t *head)
{
	listint_t *prev = NULL;
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return (head);
}

/**
 * is_palindrome - a function to check if the list is a pallindrome
 * @head: list address
 * Return: 0 if not palindrome, 1 otherwise
 */

int is_palindrome(listint_t **head)
{
	int list_len, second_address, i;
	listint_t *first = *head;
	listint_t *second = *head;
	listint_t *temp = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	list_len = list_length(head);
	second_address = (list_len % 2 == 0) ? (list_len / 2) : (list_len / 2) + 1;
	for (i = 0; i < second_address; i++)
	{
		second = second->next;
	}
	second = rev_list(second);
	while (second != NULL)
	{
		if (second->n != first->n)
		{
			return (0);
		}

		first = first->next;
		second = second->next;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (1);
}
