#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rabit, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	rabit = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (rabit == hare)
		{
			rabit = head;

			while (rabit != hare)
			{
				rabit = rabit->next;
				hare = hare->next;
			}

			return (rabit);
		}

		rabit = rabit->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
