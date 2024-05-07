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

        listint_t *slow, *fast;	

	current = list;

	if (!list)
		return (0);
        slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
