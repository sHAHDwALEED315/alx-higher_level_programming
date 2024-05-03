#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/*
 * check_cycle - check if there is any cycle in the list
 * @*list: the head of the list we are checking
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{

	const listint_t *current;

	current = list;

	if (!list)
		return (0);

	while (current != NULL)
	{
		current = current->next;
                if (current == list)
	        {
			return (1);
		}
	}

	return (0);
}
