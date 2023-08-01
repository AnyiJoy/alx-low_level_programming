#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *bull, *dog;

	bull= dog = head;
	while (bull && dog && dog->next)
	{
		bull =bull->next;
		dog = dog->next->next;
		if (bull == dog)
		{
			bull = head;
			break;
		}
	}
	if (!bull || !dog || !dog->next)
		return (NULL);
	while (bull != dog)
	{
		bull = bull->next;
		dog = dog->next;
	}
	return (dog);
}
