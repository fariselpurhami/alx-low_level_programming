#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - LET'S WRITE A FUNCTION
 * THAT WILL FIND LOOPS IN A LINKED LISTINT_T.
 * @head: IT'S LIST OF POINTETS IN THE HEADER.
 * Return: THE ADDRESS OF THE NODE WHERE LOOP
 * WILL BE STARTS,OR NULL IF THERE IS NO LOOP.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	
	if (slow == fast)
	{
		slow = head;
	}
	
	while (slow && fast)
	{
		if (slow == fast)
		{
			return (slow);
		}
			
			slow = slow->next;
			fast = fast->next;
			}
			}
			
			return (NULL);
			}
		