#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t lsit
 * @head: A pointer to the head of the listint_t list
 *
 * Return: If the lsit is empty - 0.
 * 	   Otherwise - the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
